// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRSTANDARDISSUERESPONDER_H
#define XRSTANDARDISSUERESPONDER_H

@class NSString;
@protocol XRIssueResponder;

#import <Foundation/Foundation.h>


@interface XRStandardIssueResponder : NSObject <XRIssueResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultResponder;
+(void)initialize;
+(void)setDefaultResponder:(id)arg0 ;
-(void)handleIssue:(id)arg0 type:(short)arg1 from:(id)arg2 ;


@end


#endif