// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMETADATAITEMVALUEREQUEST_H
#define AVMETADATAITEMVALUEREQUEST_H


#import <Foundation/Foundation.h>

#import "AVMetadataItemValueRequestInternal.h"
#import "AVMetadataItem.h"

@interface AVMetadataItemValueRequest : NSObject {
    AVMetadataItemValueRequestInternal *_valueRequest;
}


@property (readonly, weak) AVMetadataItem *metadataItem;


+(id)metadataItemValueRequestWithMetadataItem:(id)arg0 ;
-(id)dataType;
-(id)error;
-(id)initWithMetadataItem:(id)arg0 ;
-(id)value;
-(void)dealloc;
-(void)respondWithError:(id)arg0 ;
-(void)respondWithValue:(id)arg0 ;
-(void)respondWithValue:(id)arg0 dataType:(id)arg1 ;


@end


#endif