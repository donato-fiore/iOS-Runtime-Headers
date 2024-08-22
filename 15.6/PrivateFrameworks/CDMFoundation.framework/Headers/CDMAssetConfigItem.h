// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMASSETCONFIGITEM_H
#define CDMASSETCONFIGITEM_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CDMAssetConfigItem : NSObject

@property (readonly, nonatomic) NSArray *assetFolderNames; // ivar: _assetFolderNames
@property (readonly, nonatomic) NSString *trialFactorName; // ivar: _trialFactorName


-(id)initWithAssetFolderNames:(id)arg0 trialFactorName:(id)arg1 ;


@end


#endif