// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREDEFERREDPHOTOPROCESSORREQUEST_H
#define FIGCAPTUREDEFERREDPHOTOPROCESSORREQUEST_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "FigCaptureDeferredPhotoProcessorRequest.h"

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {
    NSObject<OS_xpc_object> *_message;
}


@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) NSString *captureRequestIdentifier; // ivar: _captureRequestIdentifier
@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *parent; // ivar: _parent
@property (readonly, nonatomic) NSString *photoIdentifier; // ivar: _photoIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithApplicationID:(id)arg0 captureRequstIdentifier:(id)arg1 photoIdentifier:(id)arg2 message:(id)arg3 parent:(id)arg4 ;
-(void)dealloc;


@end


#endif