// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHBARFIELDEDITOR_H
#define _UISEARCHBARFIELDEDITOR_H



#import "UIFieldEditor.h"

@interface _UISearchBarFieldEditor : UIFieldEditor {
    ? _flags;
}




-(BOOL)layoutManager:(id)arg0 shouldSetLineFragmentRect:(struct CGRect *)arg1 lineFragmentUsedRect:(struct CGRect *)arg2 baselineOffset:(*CGFloat)arg3 inTextContainer:(id)arg4 forGlyphRange:(struct _NSRange )arg5 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(void)_updateTokenViews;
-(void)activateEditor;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg0 ;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutSubviews;


@end


#endif