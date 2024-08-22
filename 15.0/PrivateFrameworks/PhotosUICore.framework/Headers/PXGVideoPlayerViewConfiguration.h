// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGVIDEOPLAYERVIEWCONFIGURATION_H
#define PXGVIDEOPLAYERVIEWCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXVideoSession.h"

@interface PXGVideoPlayerViewConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL toneMapToStandardDynamicRange; // ivar: _toneMapToStandardDynamicRange
@property (readonly, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithVideoSession:(id)arg0 toneMapToStandardDynamicRange:(BOOL)arg1 ;
-(void)prepareForRender;


@end


#endif