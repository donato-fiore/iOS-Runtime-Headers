// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPLATFORMCONDITIONVALIDATOR_H
#define SXPLATFORMCONDITIONVALIDATOR_H

@class NSString;
@protocol SXConditionValidating;

#import <Foundation/Foundation.h>


@interface SXPlatformConditionValidator : NSObject <SXConditionValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *platform; // ivar: _platform
@property (readonly) Class superclass;


-(BOOL)validateCondition:(id)arg0 context:(id)arg1 ;
-(id)initWithPlatform:(id)arg0 ;


@end


#endif