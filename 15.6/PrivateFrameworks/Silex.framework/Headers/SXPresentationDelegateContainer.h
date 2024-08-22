// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTATIONDELEGATECONTAINER_H
#define SXPRESENTATIONDELEGATECONTAINER_H

@class NSString;
@protocol SXPresentationDelegateContainer, SXPresentationDelegate;

#import <Foundation/Foundation.h>


@interface SXPresentationDelegateContainer : NSObject <SXPresentationDelegateContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<SXPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


-(void)registerPresentationDelegate:(id)arg0 ;


@end


#endif