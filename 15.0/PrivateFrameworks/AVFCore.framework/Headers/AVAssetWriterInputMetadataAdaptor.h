// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTMETADATAADAPTOR_H
#define AVASSETWRITERINPUTMETADATAADAPTOR_H


#import <Foundation/Foundation.h>

#import "AVAssetWriterInputMetadataAdaptorInternal.h"
#import "AVAssetWriterInput.h"

@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}


@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;


+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg0 ;
+(void)initialize;
-(BOOL)appendTimedMetadataGroup:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetWriterInput:(id)arg0 ;
-(void)dealloc;


@end


#endif