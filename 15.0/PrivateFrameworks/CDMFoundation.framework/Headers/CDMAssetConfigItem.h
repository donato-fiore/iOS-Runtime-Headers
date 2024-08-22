// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMASSETCONFIGITEM_H
#define CDMASSETCONFIGITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDMAssetConfigItem : NSObject

@property (readonly, nonatomic) NSString *assetFolderName; // ivar: _assetFolderName
@property (readonly, nonatomic) NSString *trialFactorName; // ivar: _trialFactorName


-(id)initWithAssetFolderName:(id)arg0 trialFactorName:(id)arg1 ;


@end


#endif