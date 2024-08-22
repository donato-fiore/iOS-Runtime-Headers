// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERINTERSTITIALEVENT_H
#define AVPLAYERINTERSTITIALEVENT_H

@class NSArray, NSDictionary, NSString, NSDate;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVPlayerItem.h"

@interface AVPlayerInterstitialEvent : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVPlayerItem *_primaryItem;
    *OpaqueFigPlayerInterstitialEvent _figEvent;
    NSArray *_templateItems;
}


@property (readonly, nonatomic) BOOL alignsResumptionWithPrimarySegmentBoundary;
@property (readonly, nonatomic) BOOL alignsStartWithPrimarySegmentBoundary;
@property (readonly, nonatomic) NSDictionary *assetListResponse;
@property (readonly, nonatomic) NSString *cue;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ? playoutLimit;
@property (readonly, weak, nonatomic) AVPlayerItem *primaryItem;
@property (readonly, nonatomic) NSUInteger restrictions;
@property (readonly, nonatomic) ? resumptionOffset;
@property (readonly, nonatomic) NSArray *templateItems;
@property (readonly, nonatomic) ? time;
@property (readonly, nonatomic) NSDictionary *userDefinedAttributes;
@property (readonly, nonatomic) BOOL willPlayOnce;


+(id)interstitialEventWithPrimaryItem:(id)arg0 date:(id)arg1 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 identifier:(id)arg1 date:(id)arg2 templateItems:(id)arg3 restrictions:(NSUInteger)arg4 resumptionOffset:(struct ? )arg5 playoutLimit:(struct ? )arg6 userDefinedAttributes:(id)arg7 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 identifier:(id)arg1 time:(struct ? )arg2 templateItems:(id)arg3 restrictions:(NSUInteger)arg4 resumptionOffset:(struct ? )arg5 playoutLimit:(struct ? )arg6 userDefinedAttributes:(id)arg7 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 templateItems:(id)arg1 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg2 ;
+(id)interstitialEventWithPrimaryItem:(id)arg0 time:(struct ? )arg1 ;
+(id)newItemArrayWithCopiedItems:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate:(*int)arg0 ;
-(NSUInteger)hash;
-(id)_internalTemplateItems;
-(id)assetURLsReturningError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPrimaryItem:(id)arg0 identifier:(id)arg1 time:(struct ? )arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(NSUInteger)arg5 resumptionOffset:(struct ? )arg6 playoutLimit:(struct ? )arg7 userDefinedAttributes:(id)arg8 ;
-(id)initWithPrimaryItem:(id)arg0 time:(struct ? )arg1 date:(id)arg2 ;
-(id)initWithPrimaryItemAndFigEvent:(id)arg0 templateItems:(id)arg1 figEvent:(struct OpaqueFigPlayerInterstitialEvent *)arg2 ;
-(struct OpaqueFigPlayerInterstitialEvent *)figEvent;
-(void)checkMutability;
-(void)dealloc;
-(void)setImmutable;


@end


#endif