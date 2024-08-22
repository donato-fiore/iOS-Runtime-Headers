// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYCONTEXT_H
#define PGMEMORYCONTEXT_H

@class NSDate, PHPhotoLibrary, NSTimeZone;

#import <Foundation/Foundation.h>


@interface PGMemoryContext : NSObject

@property (retain, nonatomic) NSDate *creationDateOfLastMemory; // ivar: _creationDateOfLastMemory
@property (readonly, nonatomic) BOOL futureLookup; // ivar: _futureLookup
@property (readonly, nonatomic) NSDate *localDate; // ivar: _localDate
@property (nonatomic) NSUInteger numberOfDaysSinceMemoryUpgrade; // ivar: _numberOfDaysSinceMemoryUpgrade
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithFutureLocalDate:(id)arg0 timeZone:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithLocalDate:(id)arg0 timeZone:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithMemoryPlanner:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif