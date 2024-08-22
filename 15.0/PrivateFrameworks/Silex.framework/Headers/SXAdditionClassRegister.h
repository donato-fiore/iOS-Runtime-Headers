// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXADDITIONCLASSREGISTER_H
#define SXADDITIONCLASSREGISTER_H

@class NSString;
@protocol SXClassRegister;

#import <Foundation/Foundation.h>


@interface SXAdditionClassRegister : NSObject <SXClassRegister>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerClasses;


@end


#endif