// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLPAGEFRAMERESOURCE_H
#define RWIPROTOCOLPAGEFRAMERESOURCE_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL failed;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *sourceMapURL;
@property (copy, nonatomic) NSString *targetId;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *url;


-(id)initWithUrl:(id)arg0 type:(NSInteger)arg1 mimeType:(id)arg2 ;


@end


#endif