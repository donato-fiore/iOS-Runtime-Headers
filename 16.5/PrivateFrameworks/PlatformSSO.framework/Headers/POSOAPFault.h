// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSOAPFAULT_H
#define POSOAPFAULT_H

@class NSString;
@protocol POXSDefinitionProvider;

#import <Foundation/Foundation.h>

#import "POSOAPCode.h"
#import "POSOAPReason.h"
#import "POSOAPFaultDetail.h"

@interface POSOAPFault : NSObject <POXSDefinitionProvider>



@property (retain, nonatomic) POSOAPCode *Code; // ivar: _Code
@property (retain, nonatomic) POSOAPReason *Reason; // ivar: _Reason
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) POSOAPFaultDetail *detail; // ivar: _detail
@property (copy, nonatomic) NSString *faultactor; // ivar: _faultactor
@property (copy, nonatomic) NSString *faultcode; // ivar: _faultcode
@property (copy, nonatomic) NSString *faultstring; // ivar: _faultstring
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;


@end


#endif