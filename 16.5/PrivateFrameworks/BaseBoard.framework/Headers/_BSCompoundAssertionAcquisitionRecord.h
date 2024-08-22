// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BSCOMPOUNDASSERTIONACQUISITIONRECORD_H
#define _BSCOMPOUNDASSERTIONACQUISITIONRECORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BSCompoundAssertion.h"
#import "_BSCompoundAssertionAcquisitionReference.h"

@interface _BSCompoundAssertionAcquisitionRecord : NSObject {
    BSCompoundAssertion *_assertion;
    NSString *_reason;
    _BSCompoundAssertionAcquisitionReference *_reference;
    id *_context;
}






@end


#endif