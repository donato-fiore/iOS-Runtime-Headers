// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVLIVEPLAYERTHROTTLINGCONTROLPARAMETERS_H
#define PVLIVEPLAYERTHROTTLINGCONTROLPARAMETERS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *playerBypassRenderLink; // ivar: _playerBypassRenderLink
@property (retain, nonatomic) NSNumber *playerQueueSize; // ivar: _playerQueueSize
@property (retain, nonatomic) NSNumber *renderLinkRate; // ivar: _renderLinkRate


+(id)CreateControllerParameters:(id)arg0 ;
-(BOOL)hasNilParameter;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)updateNilsFrom:(id)arg0 ;


@end


#endif