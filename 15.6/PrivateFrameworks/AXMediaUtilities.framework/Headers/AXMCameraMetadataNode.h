// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMCAMERAMETADATANODE_H
#define AXMCAMERAMETADATANODE_H



#import "AXMSourceNode.h"

@interface AXMCameraMetadataNode : AXMSourceNode



+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)triggerWithCameraType:(NSInteger)arg0 cacheKey:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif