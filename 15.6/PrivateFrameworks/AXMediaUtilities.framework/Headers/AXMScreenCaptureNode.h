// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMSCREENCAPTURENODE_H
#define AXMSCREENCAPTURENODE_H



#import "AXMSourceNode.h"
#import "AXMScreenGrabber.h"

@interface AXMScreenCaptureNode : AXMSourceNode

@property (retain, nonatomic) AXMScreenGrabber *screenGrabber; // ivar: _screenGrabber


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)nodeInitialize;
-(void)produceImage:(id)arg0 ;
-(void)triggerWithScreenCaptureRegion:(struct CGRect )arg0 interfaceOrientation:(NSInteger)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(id)arg4 ;


@end


#endif