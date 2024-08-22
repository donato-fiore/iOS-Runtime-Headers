// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYCLIENTSTREAMCONTEXTPROMISE_H
#define OSPREYCLIENTSTREAMCONTEXTPROMISE_H

@class NSString;
@protocol OspreyClientStreamingContext;

#import <Foundation/Foundation.h>

#import "OspreyDeferredObject.h"

@interface OspreyClientStreamContextPromise : NSObject <OspreyClientStreamingContext>

 {
    OspreyDeferredObject *_deferredContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFulfillmentQueue:(id)arg0 ;
-(void)finishWriting;
-(void)fulfill:(id)arg0 ;
-(void)writeFrame:(id)arg0 ;
-(void)writeFrame:(id)arg0 compressed:(BOOL)arg1 ;


@end


#endif