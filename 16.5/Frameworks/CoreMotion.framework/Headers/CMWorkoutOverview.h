// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWORKOUTOVERVIEW_H
#define CMWORKOUTOVERVIEW_H

@class NSUUID, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWorkoutOverview : NSObject <NSSecureCoding, NSCopying>

 {
    NSUUID *_overviewId;
    NSArray *_workouts;
}


@property (readonly, nonatomic) NSUUID *overviewId;
@property (readonly, nonatomic) NSArray *workouts;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOverviewId:(id)arg0 workouts:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif