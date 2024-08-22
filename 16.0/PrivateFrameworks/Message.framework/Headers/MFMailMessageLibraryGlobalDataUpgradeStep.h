// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILMESSAGELIBRARYGLOBALDATAUPGRADESTEP_H
#define MFMAILMESSAGELIBRARYGLOBALDATAUPGRADESTEP_H

@class NSString;
@protocol EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryGlobalDataUpgradeStep : NSObject <EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_recreateMessagesIndices:(id)arg0 ;
+(id)_messagesTableDefinition;
+(id)_triggerDefinition;
+(int)runWithConnection:(id)arg0 ;


@end


#endif