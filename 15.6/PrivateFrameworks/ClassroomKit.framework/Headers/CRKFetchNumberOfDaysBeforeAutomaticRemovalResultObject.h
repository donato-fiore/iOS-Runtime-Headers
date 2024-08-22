// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHNUMBEROFDAYSBEFOREAUTOMATICREMOVALRESULTOBJECT_H
#define CRKFETCHNUMBEROFDAYSBEFOREAUTOMATICREMOVALRESULTOBJECT_H

@class CATTaskResultObject;



@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalResultObject : CATTaskResultObject

@property (nonatomic) NSInteger numberOfDaysBeforeAutomaticRemoval; // ivar: _numberOfDaysBeforeAutomaticRemoval


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumberOfDaysBeforeAutomaticRemoval:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif