// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALSINGLEDATABASEINMEMORYCHANGETIMESTAMP_H
#define CALSINGLEDATABASEINMEMORYCHANGETIMESTAMP_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CalSingleDatabaseInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger myself; // ivar: _myself
@property (readonly, nonatomic) NSUInteger others; // ivar: _others


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDawnOfTime;
-(id)initWithTimestampForMyself:(NSUInteger)arg0 others:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif