// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSWEETGUMPLANGROUP_H
#define CTSWEETGUMPLANGROUP_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSweetgumPlanGroup : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger planCategory; // ivar: _planCategory
@property (retain, nonatomic) NSArray *plans; // ivar: _plans


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif