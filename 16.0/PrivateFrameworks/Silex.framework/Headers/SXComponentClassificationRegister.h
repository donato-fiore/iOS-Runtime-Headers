// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTCLASSIFICATIONREGISTER_H
#define SXCOMPONENTCLASSIFICATIONREGISTER_H

@class NSString;
@protocol SXClassRegister;

#import <Foundation/Foundation.h>


@interface SXComponentClassificationRegister : NSObject <SXClassRegister>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classifications;
+(void)registerClasses;


@end


#endif