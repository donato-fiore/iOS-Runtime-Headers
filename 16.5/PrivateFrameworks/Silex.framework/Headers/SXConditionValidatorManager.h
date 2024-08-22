// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCONDITIONVALIDATORMANAGER_H
#define SXCONDITIONVALIDATORMANAGER_H

@class NSString, NSMutableArray;
@protocol SXConditionValidatorManager, SXConditionValidating;

#import <Foundation/Foundation.h>


@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *validators; // ivar: _validators


-(BOOL)validateCondition:(id)arg0 context:(id)arg1 ;
-(id)init;
-(void)addConditionValidator:(id)arg0 ;


@end


#endif