// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCOURSESIZELIMITINGROSTERPROVIDER_H
#define CRKASMCOURSESIZELIMITINGROSTERPROVIDER_H



#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKASMCourseSizeLimitingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) NSInteger maxTrustedUserCount; // ivar: _maxTrustedUserCount
@property (readonly, nonatomic) NSInteger maxUserCount; // ivar: _maxUserCount


-(BOOL)isLegalToUpdateCourse:(id)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(id)courseForIdentifier:(id)arg0 ;
-(id)initWithRosterProvider:(id)arg0 maxUserCount:(NSInteger)arg1 maxTrustedUserCount:(NSInteger)arg2 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif