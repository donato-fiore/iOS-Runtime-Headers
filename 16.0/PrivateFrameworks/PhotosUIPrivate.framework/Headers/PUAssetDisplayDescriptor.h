// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETDISPLAYDESCRIPTOR_H
#define PUASSETDISPLAYDESCRIPTOR_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PUAssetReference.h"

@interface PUAssetDisplayDescriptor : NSObject

@property (readonly, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) NSDate *modifiedAfterDate; // ivar: _modifiedAfterDate
@property (readonly, nonatomic) ? videoSeekTime; // ivar: _videoSeekTime


+(id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithAssetReference:(id)arg0 modifiedAfterDate:(id)arg1 videoSeekTime:(struct ? )arg2 ;


@end


#endif