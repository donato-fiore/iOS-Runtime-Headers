// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMASSETCONFIGITEM_H
#define CDMASSETCONFIGITEM_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CDMAssetConfigItem : NSObject

@property (readonly, nonatomic) NSDictionary *assetFolderNamesByTrialFactorNames; // ivar: _assetFolderNamesByTrialFactorNames


-(id)getAssetFolderNamesByTrialFactorNames;
-(id)initWithAssetFolderNamesByTrialFactorNames:(id)arg0 ;


@end


#endif