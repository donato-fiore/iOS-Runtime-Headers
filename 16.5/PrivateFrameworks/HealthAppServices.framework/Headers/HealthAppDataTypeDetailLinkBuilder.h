// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HEALTHAPPDATATYPEDETAILLINKBUILDER_H
#define HEALTHAPPDATATYPEDETAILLINKBUILDER_H



#import "HealthAppLinkBuilder.h"

@interface HealthAppDataTypeDetailLinkBuilder : HealthAppLinkBuilder



-(id)URLForDataTypeDetailWithObjectType:(id)arg0 ;
-(id)URLForDataTypeDetailWithObjectType:(id)arg0 date:(id)arg1 ;
-(id)URLForDataTypeDetailWithObjectType:(id)arg0 date:(id)arg1 trendOverlay:(NSInteger)arg2 ;
-(id)URLForDataTypeDetailWithObjectType:(id)arg0 dateInterval:(id)arg1 ;
-(id)URLForDataTypeDetailWithObjectType:(id)arg0 dateInterval:(id)arg1 trendOverlay:(NSInteger)arg2 ;
-(id)URLForDataTypeDetailWithObjectType:(id)arg0 trendOverlay:(NSInteger)arg1 ;
-(id)baseURLComponentsWithObjectType:(id)arg0 trendOverlay:(NSInteger)arg1 ;


@end


#endif