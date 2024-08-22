// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMIGRATIONTOOLREMINDERMIGRATIONCONTROLLER_H
#define CALMIGRATIONTOOLREMINDERMIGRATIONCONTROLLER_H

@class NSString, CalMigrationToolOptions;
@protocol CalMigrationController;

#import <Foundation/Foundation.h>


@interface CalMigrationToolReminderMigrationController : NSObject <CalMigrationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CalMigrationController> *defaultProvider; // ivar: _defaultProvider
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions; // ivar: _toolOptions


-(id)initWithToolOptions:(id)arg0 defaultProvider:(id)arg1 ;
-(void)migrationDidFinishWithResult:(NSUInteger)arg0 ;


@end


#endif