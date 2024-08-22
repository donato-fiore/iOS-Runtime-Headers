// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALAGGREGATEMIGRATIONCONTROLLER_H
#define CALAGGREGATEMIGRATIONCONTROLLER_H

@class NSArray, NSString;
@protocol CalMigrationController;

#import <Foundation/Foundation.h>


@interface CalAggregateMigrationController : NSObject <CalMigrationController>



@property (readonly, nonatomic) NSArray *controllers; // ivar: _controllers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) Class superclass;


-(id)initWithControllers:(id)arg0 ;
-(void)migrationDidFinishWithResult:(NSUInteger)arg0 ;


@end


#endif