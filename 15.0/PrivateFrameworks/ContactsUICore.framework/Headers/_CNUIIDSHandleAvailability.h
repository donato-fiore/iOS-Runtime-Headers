// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNUIIDSHANDLEAVAILABILITY_H
#define _CNUIIDSHANDLEAVAILABILITY_H

@class NSString;
@protocol CNUIIDSHandleAvailability, CNUIIDSHandle;

#import <Foundation/Foundation.h>


@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>



@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNUIIDSHandle> *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) Class superclass;


-(id)initWithHandle:(id)arg0 available:(BOOL)arg1 ;


@end


#endif