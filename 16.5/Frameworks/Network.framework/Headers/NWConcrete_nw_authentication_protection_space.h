// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_AUTHENTICATION_PROTECTION_SPACE_H
#define NWCONCRETE_NW_AUTHENTICATION_PROTECTION_SPACE_H

@class NSString;
@protocol OS_nw_authentication_protection_space, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    BOOL is_proxy;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif