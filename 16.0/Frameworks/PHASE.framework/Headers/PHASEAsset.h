// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEASSET_H
#define PHASEASSET_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PHASEAssetRegistry.h"

@interface PHASEAsset : NSObject

@property (weak) PHASEAssetRegistry *assetRegistry; // ivar: _assetRegistry
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *uid;


+(id)new;
-(id)init;
-(id)initWithUID:(id)arg0 assetRegistry:(id)arg1 ;


@end


#endif