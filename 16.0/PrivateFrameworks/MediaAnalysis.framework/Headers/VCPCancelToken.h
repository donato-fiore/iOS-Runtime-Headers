// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCANCELTOKEN_H
#define VCPCANCELTOKEN_H


#import <Foundation/Foundation.h>


@interface VCPCancelToken : NSObject {
    atomic<bool> _canceled;
}




-(BOOL)isCanceled;
-(void)cancel;


@end


#endif