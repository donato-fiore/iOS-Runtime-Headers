// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCONVERSATIONPRUNINGACTIVITYMANAGER_H
#define EDCONVERSATIONPRUNINGACTIVITYMANAGER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDConversationPruningActivityManager : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(void)scheduleWithConversationManager:(id)arg0 ;


@end


#endif