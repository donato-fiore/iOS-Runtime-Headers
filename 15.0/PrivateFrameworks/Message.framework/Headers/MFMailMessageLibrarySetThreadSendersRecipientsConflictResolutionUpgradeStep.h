// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGELIBRARYSETTHREADSENDERSRECIPIENTSCONFLICTRESOLUTIONUPGRADESTEP_H
#define MFMAILMESSAGELIBRARYSETTHREADSENDERSRECIPIENTSCONFLICTRESOLUTIONUPGRADESTEP_H

@class NSString;
@protocol EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject <EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_schemaWithThreadsTable:(id)arg0 ;
+(id)threadRecipientsTableSchema;
+(id)threadSendersTableSchema;
+(int)runWithConnection:(id)arg0 ;


@end


#endif