// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABSCALLBACKINVOKER_H
#define ABSCALLBACKINVOKER_H


#import <Foundation/Foundation.h>


@interface ABSCallbackInvoker : NSObject {
    *void addressBook;
    *unk callback;
    *void context;
}




+(void)invokeOnThread:(id)arg0 callback:(*unk)arg1 withAddressBook:(*void)arg2 context:(*void)arg3 ;
-(void)invoke;


@end


#endif