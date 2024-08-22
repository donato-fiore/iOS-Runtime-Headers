// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICOREPINGINFO_H
#define SIRICOREPINGINFO_H

@class NSMapTable;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCorePingInfo : NSObject <NSCopying>

 {
    NSMapTable *_outstandingPings;
}


@property (readonly, nonatomic) CGFloat avgPingTime; // ivar: _avgPingTime
@property (readonly, nonatomic) NSInteger pingAcknowledgedCount; // ivar: _pingAcknowledgedCount


-(NSUInteger)numberOfUnacknowledgedPings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)markPingSentWithIndex:(NSInteger)arg0 ;
-(void)markPongReceivedWithIndex:(NSInteger)arg0 ;


@end


#endif