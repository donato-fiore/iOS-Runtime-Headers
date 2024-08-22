// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECCONCRETE_SEC_ARRAY_H
#define SECCONCRETE_SEC_ARRAY_H

@class NSString;
@protocol OS_sec_array, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SecConcrete_sec_array : NSObject <OS_sec_array>

 {
    NSObject<OS_xpc_object> *xpc_array;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif