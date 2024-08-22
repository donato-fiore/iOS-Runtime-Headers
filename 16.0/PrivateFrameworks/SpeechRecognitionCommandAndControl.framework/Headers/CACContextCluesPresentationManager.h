// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCONTEXTCLUESPRESENTATIONMANAGER_H
#define CACCONTEXTCLUESPRESENTATIONMANAGER_H

@class NSString;
@protocol CACContextCluesDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACContextCluesPresentationManager : CACSimpleContentViewManager <CACContextCluesDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isOverlay;
-(void)contextCludesDidPressDoneButton;
-(void)showWithCommands:(id)arg0 ;


@end


#endif