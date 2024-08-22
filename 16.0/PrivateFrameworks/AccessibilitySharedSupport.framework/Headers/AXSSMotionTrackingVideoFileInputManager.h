// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSMOTIONTRACKINGVIDEOFILEINPUTMANAGER_H
#define AXSSMOTIONTRACKINGVIDEOFILEINPUTMANAGER_H

@class NSMutableArray, NSArray;
@protocol AXSSMotionTrackingVideoFileInputManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingVideoFileInputManager : NSObject

@property (nonatomic) BOOL _monitoring; // ivar: __monitoring
@property (retain, nonatomic) NSMutableArray *_videoFileInputNames; // ivar: __videoFileInputNames
@property (weak, nonatomic) NSObject<AXSSMotionTrackingVideoFileInputManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *videoFileInputNames;


+(BOOL)allowVideoFileInput;
-(id)init;
-(void)_update;
-(void)_videoFileInputNamesChanged:(id)arg0 ;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif