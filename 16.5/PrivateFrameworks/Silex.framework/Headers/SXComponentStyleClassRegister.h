// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTSTYLECLASSREGISTER_H
#define SXCOMPONENTSTYLECLASSREGISTER_H

@class NSString;
@protocol SXClassRegister;

#import <Foundation/Foundation.h>


@interface SXComponentStyleClassRegister : NSObject <SXClassRegister>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerClasses;


@end


#endif