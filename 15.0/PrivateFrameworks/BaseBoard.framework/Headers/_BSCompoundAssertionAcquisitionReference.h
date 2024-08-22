// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BSCOMPOUNDASSERTIONACQUISITIONREFERENCE_H
#define _BSCOMPOUNDASSERTIONACQUISITIONREFERENCE_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_BSCompoundAssertionAcquisitionRecord.h"

@interface _BSCompoundAssertionAcquisitionReference : NSObject <BSInvalidatable>

 {
    atomic_flag _invalid;
    _BSCompoundAssertionAcquisitionRecord *_record;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)invalidate;


@end


#endif