// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALOUTOFPROCESSMIGRATOR_H
#define CALOUTOFPROCESSMIGRATOR_H

@class NSString;
@protocol CalOutOfProcessMigrator;

#import <Foundation/Foundation.h>


@interface CalOutOfProcessMigrator : NSObject <CalOutOfProcessMigrator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)performMigrationIfNeeded;


@end


#endif