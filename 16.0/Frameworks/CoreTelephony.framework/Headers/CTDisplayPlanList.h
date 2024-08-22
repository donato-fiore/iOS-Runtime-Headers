// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDISPLAYPLANLIST_H
#define CTDISPLAYPLANLIST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDisplayPlanList : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *plans; // ivar: _plans


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayPlans:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif