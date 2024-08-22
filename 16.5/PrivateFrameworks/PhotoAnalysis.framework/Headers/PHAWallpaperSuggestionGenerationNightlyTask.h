// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWALLPAPERSUGGESTIONGENERATIONNIGHTLYTASK_H
#define PHAWALLPAPERSUGGESTIONGENERATIONNIGHTLYTASK_H

@class NSString, NSDictionary;
@protocol PHASuggestionGenerationTask;

#import <Foundation/Foundation.h>


@interface PHAWallpaperSuggestionGenerationNightlyTask : NSObject <PHASuggestionGenerationTask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary; // ivar: _suggestionOptionsDictionary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


+(BOOL)shouldRefreshGalleryWithLoggingConnection:(id)arg0 ;
+(id)lastGalleryAppearanceDateWithError:(*id)arg0 ;
-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 reply:(id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;


@end


#endif