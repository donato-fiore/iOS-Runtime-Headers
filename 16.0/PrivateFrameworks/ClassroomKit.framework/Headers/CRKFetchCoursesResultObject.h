// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHCOURSESRESULTOBJECT_H
#define CRKFETCHCOURSESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchCoursesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *courses; // ivar: _courses


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif