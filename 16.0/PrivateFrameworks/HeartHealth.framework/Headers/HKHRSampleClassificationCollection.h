// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRSAMPLECLASSIFICATIONCOLLECTION_H
#define HKHRSAMPLECLASSIFICATIONCOLLECTION_H

@class NSArray, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRSampleClassificationCollection : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *classifications; // ivar: _classifications
@property (copy, nonatomic) NSNumber *dayIndex; // ivar: _dayIndex
@property (copy, nonatomic) NSString *majorityTimeZone; // ivar: _majorityTimeZone


+(BOOL)supportsSecureCoding;
-(id)initWithClassifications:(id)arg0 dayIndex:(id)arg1 majorityTimeZone:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif