// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLIGNOREDRECORD_H
#define CPLIGNOREDRECORD_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "CPLRecordChange.h"

@interface CPLIgnoredRecord : NSObject

@property (readonly, nonatomic) NSDate *ignoredDate; // ivar: _ignoredDate
@property (readonly, nonatomic) CPLRecordChange *record; // ivar: _record


-(id)initWithRecord:(id)arg0 ignoredDate:(id)arg1 ;


@end


#endif