// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMODELASSETREFERENCE_H
#define RMMODELASSETREFERENCE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface RMModelAssetReference : NSObject

@property (readonly, copy, nonatomic) NSArray *assetTypes; // ivar: _assetTypes
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 assetTypes:(id)arg1 ;


@end


#endif