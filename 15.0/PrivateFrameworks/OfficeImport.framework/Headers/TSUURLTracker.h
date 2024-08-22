// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUURLTRACKER_H
#define TSUURLTRACKER_H

@class NSURL, NSData, NSString;
@protocol TSUURLWrapper;

#import <Foundation/Foundation.h>

#import "TSUURLTrackerFilePresenter.h"

@interface TSUURLTracker : NSObject <TSUURLWrapper>

 {
    TSUURLTrackerFilePresenter *_filePresenter;
}


@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)URLAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithBookmarkData:(id)arg0 ;
-(id)initWithBookmarkData:(id)arg0 delegate:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 bookmarkData:(id)arg1 delegate:(id)arg2 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)stop;


@end


#endif