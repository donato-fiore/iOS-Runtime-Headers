// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPOLLENCONDITIONS_H
#define WFPOLLENCONDITIONS_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFPollenConditions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSUInteger grassIndex; // ivar: _grassIndex
@property (nonatomic) NSUInteger ragweedIndex; // ivar: _ragweedIndex
@property (nonatomic) NSUInteger timeOfDay; // ivar: _timeOfDay
@property (nonatomic) NSUInteger treeIndex; // ivar: _treeIndex


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif