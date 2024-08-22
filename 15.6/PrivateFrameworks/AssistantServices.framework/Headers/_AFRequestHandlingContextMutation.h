// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFREQUESTHANDLINGCONTEXTMUTATION_H
#define _AFREQUESTHANDLINGCONTEXTMUTATION_H

@class NSString;
@protocol AFRequestHandlingContextMutating;

#import <Foundation/Foundation.h>

#import "AFRequestHandlingContext.h"

@interface _AFRequestHandlingContextMutation : NSObject <AFRequestHandlingContextMutating>

 {
    AFRequestHandlingContext *_baseModel;
    NSString *_requestID;
    NSString *_inputDeviceID;
    NSString *_inputAssistantID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setInputAssistantID:(id)arg0 ;
-(void)setInputDeviceID:(id)arg0 ;
-(void)setRequestID:(id)arg0 ;


@end


#endif