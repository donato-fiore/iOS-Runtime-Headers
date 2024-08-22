// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDLOCKASSERTION_H
#define CDPDLOCKASSERTION_H


#import <Foundation/Foundation.h>


@interface CDPDLockAssertion : NSObject {
    *__MKBAssertion _assertionRef;
}




+(id)lock;
+(id)lockWithError:(*id)arg0 ;
-(void)unlock;


@end


#endif