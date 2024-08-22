// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSAMPLEBUFFERREQUEST_H
#define AVSAMPLEBUFFERREQUEST_H


#import <Foundation/Foundation.h>

#import "AVSampleBufferRequestInternal.h"
#import "AVSampleCursor.h"

@interface AVSampleBufferRequest : NSObject {
    AVSampleBufferRequestInternal *_request;
}


@property (nonatomic) NSInteger direction;
@property (retain, nonatomic) AVSampleCursor *limitCursor;
@property (nonatomic) NSInteger maxSampleCount;
@property (nonatomic) NSInteger mode;
@property (nonatomic) ? overrideTime;
@property (nonatomic) NSInteger preferredMinSampleCount;
@property (readonly, retain, nonatomic) AVSampleCursor *startCursor;


+(id)sampleBufferRequestWithStartCursor:(id)arg0 ;
-(id)init;
-(id)initWithStartCursor:(id)arg0 ;
-(int)_figSampleGeneratorReadPolicy;
-(unsigned int)_figSampleGeneratorReadFlags;
-(void)dealloc;


@end


#endif