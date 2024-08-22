// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AABRIDGEDMESCALSIGNER_H
#define AABRIDGEDMESCALSIGNER_H

@class AMSBag;

#import <Foundation/Foundation.h>


@interface AABridgedMescalSigner : NSObject

@property (retain, nonatomic) AMSBag *bag; // ivar: _bag


-(id)init;
-(id)signatureWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif