// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDCONVERSATIONDAILYCLOUDEXPORTACTIVITYMANAGER_H
#define EDCONVERSATIONDAILYCLOUDEXPORTACTIVITYMANAGER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDConversationDailyCloudExportActivityManager : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(void)scheduleWithConversationExportDelegate:(id)arg0 conversationManager:(id)arg1 ;


@end


#endif