// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTUREREQUESTINFO_H
#define CAMCAPTUREREQUESTINFO_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "CAMStillImageCaptureRequest.h"

@interface CAMCaptureRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *_receivedCallbacks; // ivar: __receivedCallbacks
@property (readonly, nonatomic) NSUInteger _userInitiationTime; // ivar: __userInitiationTime
@property (readonly, nonatomic) NSArray *callbackReceipts;
@property (readonly, nonatomic) CAMStillImageCaptureRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 ;
-(void)didReceiveCallback:(NSInteger)arg0 atAbsoluteTime:(NSUInteger)arg1 ;


@end


#endif