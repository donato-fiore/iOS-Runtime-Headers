// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDJOBSCHEDULERRESPONSE_H
#define ASDJOBSCHEDULERRESPONSE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "ASDRequestResponse.h"

@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding>



@property (copy) NSArray *bucketNames; // ivar: _bucketNames
@property (readonly) NSArray *currentItems; // ivar: _currentItems
@property (copy) NSArray *hardFailureItems; // ivar: _hardFailureItems
@property (nonatomic) NSInteger maxItemCount; // ivar: _maxItemCount
@property (copy) NSArray *nextItems; // ivar: _nextItems
@property (copy) NSArray *skippedItems; // ivar: _skippedItems
@property (copy) NSArray *softFailureItems; // ivar: _softFailureItems


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif