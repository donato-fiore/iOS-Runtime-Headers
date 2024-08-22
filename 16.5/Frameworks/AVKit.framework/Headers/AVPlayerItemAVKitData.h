// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMAVKITDATA_H
#define AVPLAYERITEMAVKITDATA_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVPlayerItemAVKitData : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *customPropertyStorage; // ivar: _customPropertyStorage
@property (nonatomic) NSInteger interstitialPolicyEnforcement; // ivar: _interstitialPolicyEnforcement


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif