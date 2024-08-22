// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDATABASEINTEGRITYERRORS_H
#define CALDATABASEINTEGRITYERRORS_H

@class NSCountedSet;
@protocol CalCalendarDatabaseIntegrityErrorReportingDelegate;

#import <Foundation/Foundation.h>


@interface CalDatabaseIntegrityErrors : NSObject

@property (retain, nonatomic) NSObject<CalCalendarDatabaseIntegrityErrorReportingDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSCountedSet *errors; // ivar: _errors


-(id)init;


@end


#endif