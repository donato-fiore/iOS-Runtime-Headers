// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSETCLASSROOMBADGECOUNTREQUEST_H
#define CRKSETCLASSROOMBADGECOUNTREQUEST_H

@class CATTaskRequest;



@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest

@property (nonatomic) NSInteger badgeCount; // ivar: _badgeCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif