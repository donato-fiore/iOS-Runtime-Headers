// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCOREANALYTICSEXTENSIONSSTATISTICS_H
#define WBSCOREANALYTICSEXTENSIONSSTATISTICS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSCoreAnalyticsExtensionsStatistics : NSObject

@property (readonly, nonatomic) NSUInteger disabledCount; // ivar: _disabledCount
@property (readonly, nonatomic) NSUInteger enabledCount; // ivar: _enabledCount
@property (readonly, nonatomic) BOOL hasExtensionThatCanOverrideNewTabPage; // ivar: _hasExtensionThatCanOverrideNewTabPage
@property (readonly, nonatomic) BOOL newTabPageIsOverridden; // ivar: _newTabPageIsOverridden
@property (readonly, nonatomic) NSArray *telemetryDataForExtensions; // ivar: _telemetryDataForExtensions


// -(id)initWithExtensionsList:(id)arg0 extractDeveloperIdentifier:(id)arg1 extractComposedIdentifier:(unk)arg2 extensionTelemetryDataPredicate:(id)arg3  ;
// -(id)initWithExtensionsList:(id)arg0 extractDeveloperIdentifier:(id)arg1 extractComposedIdentifier:(unk)arg2 extensionTelemetryDataPredicate:(id)arg3 newTabPageIsOverridden:(unk)arg4  ;


@end


#endif