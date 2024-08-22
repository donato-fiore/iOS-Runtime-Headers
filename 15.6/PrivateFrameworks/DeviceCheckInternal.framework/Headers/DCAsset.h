// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCASSET_H
#define DCASSET_H

@class NSData;

#import <Foundation/Foundation.h>


@interface DCAsset : NSObject

@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic) CGFloat publicKeyRefreshInterval; // ivar: _publicKeyRefreshInterval
@property (nonatomic) NSUInteger version; // ivar: _version


+(id)assetWithMobileAsset:(id)arg0 ;
-(id)description;


@end


#endif