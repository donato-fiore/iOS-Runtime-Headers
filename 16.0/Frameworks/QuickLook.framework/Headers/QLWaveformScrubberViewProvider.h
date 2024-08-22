// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLWAVEFORMSCRUBBERVIEWPROVIDER_H
#define QLWAVEFORMSCRUBBERVIEWPROVIDER_H

@class NSString;
@protocol PHVideoScrubberFilmstripViewProvider;

#import <Foundation/Foundation.h>


@interface QLWaveformScrubberViewProvider : NSObject <PHVideoScrubberFilmstripViewProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)generateWaveformForWidth:(CGFloat)arg0 asset:(id)arg1 updateHandler:(id)arg2 ;
-(id)createFilmstripViewForVideoScrubberView:(id)arg0 ;


@end


#endif