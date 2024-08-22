// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMIMPLEMENTATION_H
#define IKDOMIMPLEMENTATION_H

@protocol IKJSDOMImplementation, IKJSDOMImplementationLS;


#import "IKJSObject.h"

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>



@property (readonly, getter=asynchronousMode) NSInteger MODE_ASYNCHRONOUS;
@property (readonly, getter=synchronousMode) NSInteger MODE_SYNCHRONOUS;


-(id)createDocument:(id)arg0 ;
-(id)createLSInput;
-(id)createLSParser:(NSInteger)arg0 ;
-(id)createLSSerializer;


@end


#endif