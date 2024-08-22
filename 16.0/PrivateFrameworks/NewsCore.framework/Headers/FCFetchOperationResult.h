// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFETCHOPERATIONRESULT_H
#define FCFETCHOPERATIONRESULT_H

@class NSError, NSSet;

#import <Foundation/Foundation.h>


@interface FCFetchOperationResult : NSObject

@property (readonly, nonatomic) BOOL anyMissingObjects;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger fetchResult; // ivar: _fetchResult
@property (readonly, nonatomic) id *fetchedObject; // ivar: _fetchedObject
@property (copy, nonatomic) NSSet *missingObjectDescriptions; // ivar: _missingObjectDescriptions
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


+(id)resultWithStatus:(NSUInteger)arg0 fetchedObject:(id)arg1 error:(id)arg2 ;
-(id)initWithStatus:(NSUInteger)arg0 fetchedObject:(id)arg1 fetchResult:(NSUInteger)arg2 error:(id)arg3 ;


@end


#endif