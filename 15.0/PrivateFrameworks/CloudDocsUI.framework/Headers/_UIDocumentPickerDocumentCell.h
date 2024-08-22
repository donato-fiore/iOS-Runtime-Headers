// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERDOCUMENTCELL_H
#define _UIDOCUMENTPICKERDOCUMENTCELL_H

@class UIDocumentPickerCell;



@interface _UIDocumentPickerDocumentCell : UIDocumentPickerCell

@property (nonatomic) BOOL enabled; // ivar: _enabled


-(void)_showPickableDiagnostic;
-(void)prepareForReuse;
-(void)reloadItem:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;
-(void)updateThumbnail;


@end


#endif