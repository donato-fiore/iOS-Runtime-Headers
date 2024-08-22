// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TESTCNUIIDSHANDLEAVAILABILITY_H
#define TESTCNUIIDSHANDLEAVAILABILITY_H

@class NSString;
@protocol CNUIIDSHandleAvailability, CNUIIDSHandle;

#import <Foundation/Foundation.h>


@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>



@property (nonatomic) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CNUIIDSHandle> *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithHandle:(id)arg0 availability:(BOOL)arg1 ;


@end


#endif