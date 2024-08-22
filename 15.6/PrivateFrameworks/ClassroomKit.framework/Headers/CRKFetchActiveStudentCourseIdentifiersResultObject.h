// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHACTIVESTUDENTCOURSEIDENTIFIERSRESULTOBJECT_H
#define CRKFETCHACTIVESTUDENTCOURSEIDENTIFIERSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *activeCourseIdentifiers; // ivar: _activeCourseIdentifiers
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers; // ivar: _activeInstructorIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif