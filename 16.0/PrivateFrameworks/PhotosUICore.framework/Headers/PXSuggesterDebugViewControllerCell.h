// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSUGGESTERDEBUGVIEWCONTROLLERCELL_H
#define PXSUGGESTERDEBUGVIEWCONTROLLERCELL_H

@class UITableViewCell, PHSuggestion;



@interface PXSuggesterDebugViewControllerCell : UITableViewCell

@property (retain) PHSuggestion *suggestion; // ivar: _suggestion


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)persist:(id)arg0 ;


@end


#endif