// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONREQUESTDISPATCHER_H
#define _MXEXTENSIONREQUESTDISPATCHER_H

@class NSString;
@protocol NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching;

#import <Foundation/Foundation.h>


@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dispatchRequest:(id)arg0 vendor:(id)arg1 completion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)startSendingUpdatesForRequest:(id)arg0 vendor:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForRequest:(id)arg0 vendor:(id)arg1 ;


@end


#endif