// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIATIMELINECUSTOMCATALOGMATCHER_H
#define SHMEDIATIMELINECUSTOMCATALOGMATCHER_H

@class NSString;
@protocol SHMatcherDelegate, SHMediaTimelineDelegate, SHMatcher;

#import <Foundation/Foundation.h>

#import "SHMediaTimeline.h"
#import "SHCustomCatalogMatcher.h"

@interface SHMediaTimelineCustomCatalogMatcher : NSObject <SHMatcherDelegate, SHMediaTimelineDelegate, SHMatcher>



@property (retain, nonatomic) SHMediaTimeline *contextTimeline; // ivar: _contextTimeline
@property (retain, nonatomic) SHCustomCatalogMatcher *customCatalogMatcher; // ivar: _customCatalogMatcher
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHMatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCustomCatalog:(id)arg0 ;
-(void)callDelegateWithSyntheticMatchForResponse:(id)arg0 ;
-(void)dealloc;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;
-(void)mediaTimeline:(id)arg0 hasUpdatedInScopeMediaItems:(id)arg1 ;
-(void)restartTimelineWithMediaItems:(id)arg0 ;
-(void)startRecognitionForRequest:(id)arg0 ;
-(void)stop;


@end


#endif