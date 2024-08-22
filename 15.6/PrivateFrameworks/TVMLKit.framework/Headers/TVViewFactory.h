// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVVIEWFACTORY_H
#define TVVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface TVViewFactory : NSObject



+(id)imageProxyWithURL:(id)arg0 ;
+(id)imageStackViewWithDescription:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
+(id)imageURLWithDescription:(id)arg0 ;
+(id)imageViewWithDescription:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
+(struct CGSize )decorateImageProxy:(id)arg0 forLayout:(id)arg1 ;


@end


#endif