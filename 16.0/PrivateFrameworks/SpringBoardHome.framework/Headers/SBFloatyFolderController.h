// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATYFOLDERCONTROLLER_H
#define SBFLOATYFOLDERCONTROLLER_H



#import "SBFolderController.h"

@interface SBFloatyFolderController : SBFolderController

@property (nonatomic) NSUInteger backgroundEffect;


+(Class)_contentViewClass;
+(Class)configurationClass;
+(id)iconLocation;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(id)floatyFolderView;
-(id)presentedIconLocations;
-(void)folderView:(id)arg0 didBeginEditingTitle:(id)arg1 ;
-(void)folderView:(id)arg0 didEndEditingTitle:(id)arg1 ;


@end


#endif