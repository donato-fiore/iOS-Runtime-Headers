// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAPTURERESPONSE_H
#define CAMCAPTURERESPONSE_H


#import <Foundation/Foundation.h>

#import "CAMCaptureCoordinationInfo.h"

@interface CAMCaptureResponse : NSObject

@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // ivar: _coordinationInfo
@property (readonly, nonatomic) unsigned short sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)init;
-(id)initWithType:(NSInteger)arg0 captureSession:(unsigned short)arg1 coordinationInfo:(id)arg2 ;
-(void)releaseCachedImages;


@end


#endif