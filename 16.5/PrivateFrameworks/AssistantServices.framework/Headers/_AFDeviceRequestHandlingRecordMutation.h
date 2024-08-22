// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFDEVICEREQUESTHANDLINGRECORDMUTATION_H
#define _AFDEVICEREQUESTHANDLINGRECORDMUTATION_H

@class NSString;
@protocol AFDeviceRequestHandlingRecordMutating;

#import <Foundation/Foundation.h>

#import "AFDeviceRequestHandlingRecord.h"

@interface _AFDeviceRequestHandlingRecordMutation : NSObject <AFDeviceRequestHandlingRecordMutating>

 {
    AFDeviceRequestHandlingRecord *_base;
    NSString *_requestID;
    NSUInteger _deviceRoles;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSUInteger)getDeviceRoles;
-(id)getRequestID;
-(id)initWithBase:(id)arg0 ;
-(void)setDeviceRoles:(NSUInteger)arg0 ;
-(void)setRequestID:(id)arg0 ;


@end


#endif