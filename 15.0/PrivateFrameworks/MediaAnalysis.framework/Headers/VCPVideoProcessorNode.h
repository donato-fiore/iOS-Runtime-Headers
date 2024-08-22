// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOPROCESSORNODE_H
#define VCPVIDEOPROCESSORNODE_H

@class VNRequest;

#import <Foundation/Foundation.h>


@interface VCPVideoProcessorNode : NSObject

@property (readonly, nonatomic) NSUInteger frameInterval; // ivar: _frameInterval
@property (readonly, nonatomic) VNRequest *request; // ivar: _request
@property (readonly, nonatomic) ? timeInterval; // ivar: _timeInterval


+(BOOL)validateConfiguration:(id)arg0 withError:(*id)arg1 ;
+(id)nodeWithRequest:(id)arg0 andConfiguration:(id)arg1 ;
-(id)initWithRequest:(id)arg0 andConfiguration:(id)arg1 ;


@end


#endif