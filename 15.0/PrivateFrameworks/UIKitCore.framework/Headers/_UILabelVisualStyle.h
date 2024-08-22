// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILABELVISUALSTYLE_H
#define _UILABELVISUALSTYLE_H


#import <Foundation/Foundation.h>


@interface _UILabelVisualStyle : NSObject



+(id)inferredVisualStyle;
-(BOOL)shouldDelayStartMarquee;
-(BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)arg0 attributes:(id)arg1 ;
-(BOOL)updatesTextColorOnUserInterfaceStyleChanges;
-(id)defaultFont;
-(void)actionsForDeallocationOfLabel:(id)arg0 ;
-(void)actionsForInitializationOfLabel:(id)arg0 ;


@end


#endif