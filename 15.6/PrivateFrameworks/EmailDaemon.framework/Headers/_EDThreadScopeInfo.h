// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EDTHREADSCOPEINFO_H
#define _EDTHREADSCOPEINFO_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _EDThreadScopeInfo : NSObject

@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (retain, nonatomic) NSDate *lastViewedDate; // ivar: _lastViewedDate
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate


-(id)description;
-(id)initWithDatabaseID:(NSInteger)arg0 needsUpdate:(BOOL)arg1 lastViewedDate:(id)arg2 ;


@end


#endif