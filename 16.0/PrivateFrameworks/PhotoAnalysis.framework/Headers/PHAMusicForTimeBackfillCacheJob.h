// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAMUSICFORTIMEBACKFILLCACHEJOB_H
#define PHAMUSICFORTIMEBACKFILLCACHEJOB_H

@class NSString;
@protocol PHAMusicJob;

#import <Foundation/Foundation.h>


@interface PHAMusicForTimeBackfillCacheJob : NSObject <PHAMusicJob>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunForLibrary:(id)arg0 ;
// -(void)runWithGraphManager:(id)arg0 progressBlock:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif