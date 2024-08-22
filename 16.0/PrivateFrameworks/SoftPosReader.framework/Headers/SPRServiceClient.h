// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRSERVICECLIENT_H
#define SPRSERVICECLIENT_H

@class NSDate;


#import "SPRObject.h"

@interface SPRServiceClient : SPRObject

@property (readonly) NSDate *buildDate;


+(id)shared;
-(BOOL)abortAndReturnError:(*id)arg0 ;
-(BOOL)jetsamAndReturnError:(*id)arg0 ;
-(id)proxyDescription;
-(void)assertCompatibleBuild;
-(void)invalidate;


@end


#endif