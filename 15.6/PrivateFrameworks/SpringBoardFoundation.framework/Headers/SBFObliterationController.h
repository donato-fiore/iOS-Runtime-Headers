// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFOBLITERATIONCONTROLLER_H
#define SBFOBLITERATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SBFObliterationController : NSObject



+(id)sharedInstance;
-(void)_doObliterateWithType:(struct __CFString *)arg0 eraseDataPlan:(BOOL)arg1 showingProgress:(BOOL)arg2 options:(id)arg3 ;
-(void)markObliterationStart;
-(void)obliterateDataPartitionShowingProgress:(BOOL)arg0 skipDataObliteration:(BOOL)arg1 eraseDataPlan:(BOOL)arg2 reason:(id)arg3 ;
-(void)wipeAndBrickShowingProgress:(BOOL)arg0 reason:(id)arg1 ;


@end


#endif