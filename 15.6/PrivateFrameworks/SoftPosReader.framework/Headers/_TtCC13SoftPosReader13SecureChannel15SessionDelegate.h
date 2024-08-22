// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC13SOFTPOSREADER13SECURECHANNEL15SESSIONDELEGATE_H
#define _TTCC13SOFTPOSREADER13SECURECHANNEL15SESSIONDELEGATE_H

@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC13SoftPosReader13SecureChannel15SessionDelegate : NSObject <NSURLSessionDelegate>

 {
    ? didBecomeInvalid;
}




-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;


@end


#endif