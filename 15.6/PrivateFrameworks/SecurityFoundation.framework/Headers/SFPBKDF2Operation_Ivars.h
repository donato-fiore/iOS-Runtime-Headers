// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPBKDF2OPERATION_IVARS_H
#define SFPBKDF2OPERATION_IVARS_H

@class NSData;
@protocol SFPseudoRandomFunction;

#import <Foundation/Foundation.h>


@interface SFPBKDF2Operation_Ivars : NSObject {
    NSInteger iterationCount;
    id<SFPseudoRandomFunction> *pseudoRandomFunction;
    NSData *salt;
}






@end


#endif