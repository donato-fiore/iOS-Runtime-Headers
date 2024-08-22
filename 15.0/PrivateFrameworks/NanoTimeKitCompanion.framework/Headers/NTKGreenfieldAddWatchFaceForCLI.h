// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDADDWATCHFACEFORCLI_H
#define NTKGREENFIELDADDWATCHFACEFORCLI_H

@class NSString;
@protocol NTKGreenfieldAddWatchFaceManagerDelegate;

#import <Foundation/Foundation.h>

#import "NTKGreenfieldAddWatchFaceManager.h"

@interface NTKGreenfieldAddWatchFaceForCLI : NSObject <NTKGreenfieldAddWatchFaceManagerDelegate>

 {
    NTKGreenfieldAddWatchFaceManager *_addWatchFaceManager;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addWatchFaceManager:(id)arg0 didFinishAddingFaceWithError:(id)arg1 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToAddComplicationWithItemId:(id)arg1 installMode:(NSInteger)arg2 skippedComplicationSlots:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToCompletedWithSkippedComplicationSlots:(id)arg1 canRevisit:(BOOL)arg2 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToComplicationsNotAvailableWithSlots:(id)arg1 unavailableTitle:(id)arg2 unavailableDescription:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToRevisitComplicationWithItemId:(id)arg1 installMode:(NSInteger)arg2 skippedComplicationSlots:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg1 ;
-(void)addWatchFaceWithURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)didStartLoadingInAddWatchFaceManager:(id)arg0 ;


@end


#endif