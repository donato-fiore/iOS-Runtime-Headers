// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTFINALVALIDATIONFILTER_H
#define MTFINALVALIDATIONFILTER_H

@class NSString;
@protocol MTEventFilter;


#import "MTObject.h"

@interface MTFinalValidationFilter : MTObject <MTEventFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldApplyDeRes; // ivar: _shouldApplyDeRes
@property (readonly) Class superclass;


-(id)apply:(id)arg0 ;
-(void)validateFields:(id)arg0 ;


@end


#endif