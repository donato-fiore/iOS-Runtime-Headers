// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFREQUESTHANDLINGCONTEXTMUTATION_H
#define _AFREQUESTHANDLINGCONTEXTMUTATION_H

@class NSString;
@protocol AFRequestHandlingContextMutating;

#import <Foundation/Foundation.h>

#import "AFRequestHandlingContext.h"

@interface _AFRequestHandlingContextMutation : NSObject <AFRequestHandlingContextMutating>

 {
    AFRequestHandlingContext *_base;
    NSString *_requestID;
    NSString *_inputDeviceID;
    NSString *_inputAssistantID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getInputAssistantID;
-(id)getInputDeviceID;
-(id)getRequestID;
-(id)initWithBase:(id)arg0 ;
-(void)setInputAssistantID:(id)arg0 ;
-(void)setInputDeviceID:(id)arg0 ;
-(void)setRequestID:(id)arg0 ;


@end


#endif