// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCONVERSATIONDAILYICLOUDEXPORTER_H
#define EDCONVERSATIONDAILYICLOUDEXPORTER_H

@class NSString;
@protocol EFLoggable, EDConversationDailyCloudExporterDelegate;

#import <Foundation/Foundation.h>

#import "EDUbiquitousConversationManager.h"

@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable>



@property (readonly, nonatomic) EDUbiquitousConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<EDConversationDailyCloudExporterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithDelegate:(id)arg0 conversationManager:(id)arg1 ;
-(void)run;


@end


#endif