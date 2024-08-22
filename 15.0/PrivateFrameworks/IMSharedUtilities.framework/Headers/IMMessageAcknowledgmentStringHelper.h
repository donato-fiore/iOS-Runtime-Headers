// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGEACKNOWLEDGMENTSTRINGHELPER_H
#define IMMESSAGEACKNOWLEDGMENTSTRINGHELPER_H


#import <Foundation/Foundation.h>


@interface IMMessageAcknowledgmentStringHelper : NSObject



+(BOOL)shouldQuoteContentString:(id)arg0 ;
+(id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(NSInteger)arg0 messageSummaryInfo:(id)arg1 format:(*NSInteger)arg2 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(NSInteger)arg0 messageSummaryInfo:(id)arg1 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(NSInteger)arg0 messageSummaryInfo:(id)arg1 isGroupMessage:(BOOL)arg2 ;
+(id)generateFormatStringForMessageAcknowledgmentType:(NSInteger)arg0 acknowledgmentDisplayName:(id)arg1 isFromMe:(BOOL)arg2 messageSummaryInfo:(id)arg3 format:(*NSInteger)arg4 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(NSInteger)arg0 acknowledgmentDisplayName:(id)arg1 isFromMe:(BOOL)arg2 messageSummaryInfo:(id)arg3 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(NSInteger)arg0 acknowledgmentDisplayName:(id)arg1 isFromMe:(BOOL)arg2 messageSummaryInfo:(id)arg3 isGroupMessage:(BOOL)arg4 ;
+(id)longContentTypeStringForContentType:(id)arg0 ;
+(id)longContentTypeStringForPluginBundleID:(id)arg0 pluginDisplayName:(id)arg1 ;
+(id)messageAcknowledgmentString:(NSInteger)arg0 lowercase:(BOOL)arg1 ;


@end


#endif