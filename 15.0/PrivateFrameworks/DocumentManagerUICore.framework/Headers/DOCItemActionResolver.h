// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCITEMACTIONRESOLVER_H
#define DOCITEMACTIONRESOLVER_H


#import <Foundation/Foundation.h>


@interface DOCItemActionResolver : NSObject {
    id *_handler;
}




-(id)initWithHandler:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)callHandler;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif