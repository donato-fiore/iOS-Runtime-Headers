// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRWRAPPINGISSUERESPONDER_H
#define XRWRAPPINGISSUERESPONDER_H

@class NSError, NSString;
@protocol XRIssueResponder;

#import <Foundation/Foundation.h>


@interface XRWrappingIssueResponder : NSObject <XRIssueResponder>

 {
    NSError *_prototype;
    id<XRIssueResponder> *_nextResponder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithNextResponder:(id)arg0 prototype:(id)arg1 ;
-(void)handleIssue:(id)arg0 type:(short)arg1 from:(id)arg2 ;


@end


#endif