// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXQUICKLOOKROUTER_H
#define SXQUICKLOOKROUTER_H

@class NSString;
@protocol SXQuickLookRouter, TFResolver;

#import <Foundation/Foundation.h>


@interface SXQuickLookRouter : NSObject <SXQuickLookRouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly) Class superclass;


-(id)initWithResolver:(id)arg0 ;
-(void)presentFile:(id)arg0 transitionContext:(id)arg1 ;


@end


#endif