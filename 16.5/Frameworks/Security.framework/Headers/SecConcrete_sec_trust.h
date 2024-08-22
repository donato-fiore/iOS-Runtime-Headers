// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCONCRETE_SEC_TRUST_H
#define SECCONCRETE_SEC_TRUST_H

@class NSString;
@protocol OS_sec_trust;

#import <Foundation/Foundation.h>


@interface SecConcrete_sec_trust : NSObject <OS_sec_trust>

 {
    *__SecTrust trust;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(void)dealloc;


@end


#endif