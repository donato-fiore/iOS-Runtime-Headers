// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDEFAULTCALENDARMIGRATIONCONTROLLER_H
#define CALDEFAULTCALENDARMIGRATIONCONTROLLER_H

@class NSString;
@protocol CalMigrationController, CalCalendarMigrationDefaultsProvider;

#import <Foundation/Foundation.h>


@interface CalDefaultCalendarMigrationController : NSObject <CalMigrationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CalCalendarMigrationDefaultsProvider> *defaultsProvider; // ivar: _defaultsProvider
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) Class superclass;


-(id)initWithDefaultsProvider:(id)arg0 ;
-(void)migrationDidFinishWithResult:(NSUInteger)arg0 ;


@end


#endif