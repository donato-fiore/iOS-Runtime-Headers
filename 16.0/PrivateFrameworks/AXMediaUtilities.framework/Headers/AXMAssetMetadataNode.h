// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMASSETMETADATANODE_H
#define AXMASSETMETADATANODE_H



#import "AXMSourceNode.h"

@interface AXMAssetMetadataNode : AXMSourceNode



+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)triggerWithAssetURL:(id)arg0 cacheKey:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif