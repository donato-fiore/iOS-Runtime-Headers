// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDEFAULTMIGRATIONABCREPORTER_H
#define CALDEFAULTMIGRATIONABCREPORTER_H

@class NSString;
@protocol CalMigrationABCReporter;

#import <Foundation/Foundation.h>


@interface CalDefaultMigrationABCReporter : NSObject <CalMigrationABCReporter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)reportIssueWithType:(id)arg0 subtype:(id)arg1 context:(id)arg2 events:(id)arg3 ;


@end


#endif