// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSURLCONTROLLERHANDLER_H
#define PSURLCONTROLLERHANDLER_H

@protocol PSURLControllerHandlerDelegate;

#import <Foundation/Foundation.h>


@interface PSURLControllerHandler : NSObject

@property (weak, nonatomic) NSObject<PSURLControllerHandlerDelegate> *delegate; // ivar: _delegate


-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif