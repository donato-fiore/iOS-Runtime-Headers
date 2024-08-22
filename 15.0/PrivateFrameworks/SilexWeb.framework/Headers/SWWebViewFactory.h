// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWWEBVIEWFACTORY_H
#define SWWEBVIEWFACTORY_H

@class NSString, NSPointerArray;
@protocol SWWebViewFactory;

#import <Foundation/Foundation.h>


@interface SWWebViewFactory : NSObject <SWWebViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSPointerArray *webViews; // ivar: _webViews


-(id)createWebViewWithWebViewConfiguration:(id)arg0 scrollSettings:(id)arg1 ;
-(id)init;
-(void)assignRelatedWebViewToConfiguration:(id)arg0 ;


@end


#endif