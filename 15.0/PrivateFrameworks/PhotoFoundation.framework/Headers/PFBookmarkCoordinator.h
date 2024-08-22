// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFBOOKMARKCOORDINATOR_H
#define PFBOOKMARKCOORDINATOR_H

@class NSCountedSet;

#import <Foundation/Foundation.h>


@interface PFBookmarkCoordinator : NSObject {
    NSCountedSet *_managedPaths;
    NSCountedSet *_accessedPaths;
}




+(BOOL)urlHasSandboxExtension:(id)arg0 ;
+(id)sharedInstance;
-(id)description;
-(id)init;
-(id)startAccesingURLForBookmarkData:(id)arg0 error:(*id)arg1 ;
-(void)_decrementRefcountForURL:(id)arg0 ;
-(void)_incrementRefcountForURL:(id)arg0 callStart:(BOOL)arg1 ;
-(void)addPowerBoxURL:(id)arg0 ;
-(void)logRefCountForUrl:(id)arg0 withPrefix:(id)arg1 sender:(id)arg2 ;
-(void)startAccessingURL:(id)arg0 ;
-(void)stopAccessingURL:(id)arg0 ;
-(void)stopAccessingURLs:(id)arg0 ;


@end


#endif