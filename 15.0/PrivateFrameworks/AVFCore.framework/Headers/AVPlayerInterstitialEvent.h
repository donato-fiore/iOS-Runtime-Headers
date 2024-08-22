// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERINTERSTITIALEVENT_H
#define AVPLAYERINTERSTITIALEVENT_H

@class NSArray, NSDate, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVPlayerItem.h"

@interface AVPlayerInterstitialEvent : NSObject {
    AVPlayerItem *_primaryItem;
    *OpaqueFigPlayerInterstitialEvent _figEvent;
    NSArray *_templateItems;
}


@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ? playoutLimit;
@property (readonly, weak, nonatomic) AVPlayerItem *primaryItem;
@property (readonly, nonatomic) NSUInteger restrictions;
@property (readonly, nonatomic) ? resumptionOffset;
@property (readonly, nonatomic) NSArray *templateItems;
@property (readonly, nonatomic) ? time;
@property (readonly, nonatomic) NSDictionary *userDefinedAttributes;


+(id)interstitialEventWithPrimaryItem:(id)arg0 identifier:(id)arg1 date:(id)arg2 templateItems:(id)arg3 restrictions:(NSUInteger)arg4 resumptionOffset:(struct ? )arg5 playoutLimit:(struct ? )arg6 userDefinedAttributes:(id)arg7 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 identifier:(id)arg1 time:(struct ? )arg2 templateItems:(id)arg3 restrictions:(NSUInteger)arg4 resumptionOffset:(struct ? )arg5 playoutLimit:(struct ? )arg6 userDefinedAttributes:(id)arg7 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 templateItems:(id)arg1 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPrimaryItem:(id)arg0 identifier:(id)arg1 time:(struct ? )arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(NSUInteger)arg5 resumptionOffset:(struct ? )arg6 playoutLimit:(struct ? )arg7 userDefinedAttributes:(id)arg8 ;
-(id)initWithPrimaryItemAndFigEvent:(id)arg0 templateItems:(id)arg1 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg2 ;
-(struct OpaqueFigPlayerInterstitialEvent *)figEvent;
-(void)dealloc;


@end


#endif