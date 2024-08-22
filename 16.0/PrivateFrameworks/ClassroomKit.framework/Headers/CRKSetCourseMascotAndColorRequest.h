// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSETCOURSEMASCOTANDCOLORREQUEST_H
#define CRKSETCOURSEMASCOTANDCOLORREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier;



@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest

@property (nonatomic) NSUInteger colorType; // ivar: _colorType
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (nonatomic) NSUInteger mascotType; // ivar: _mascotType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif