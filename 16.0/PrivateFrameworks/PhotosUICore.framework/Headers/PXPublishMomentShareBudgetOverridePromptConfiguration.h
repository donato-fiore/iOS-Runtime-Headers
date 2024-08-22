// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPUBLISHMOMENTSHAREBUDGETOVERRIDEPROMPTCONFIGURATION_H
#define PXPUBLISHMOMENTSHAREBUDGETOVERRIDEPROMPTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXPublishMomentShareBudgetOverridePromptConfiguration : NSObject

@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) NSUInteger networkType; // ivar: _networkType
@property (nonatomic) BOOL useWLAN; // ivar: _useWLAN


-(id)initWithUseWLAN:(BOOL)arg0 networkType:(NSUInteger)arg1 assetCount:(NSUInteger)arg2 deviceModel:(id)arg3 ;


@end


#endif