// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEEDITORBASEVIEWCONTROLLER_H
#define ICNOTEEDITORBASEVIEWCONTROLLER_H

@class NSString, ICNote;


#import "ICScrollViewDelegateViewController.h"

@interface ICNoteEditorBaseViewController : ICScrollViewDelegateViewController

@property (readonly, nonatomic, getter=isAuxiliaryEditor) BOOL auxiliaryEditor;
@property (readonly, nonatomic, getter=isEditingOnSecureScreen) BOOL editingOnSecureScreen;
@property (readonly, nonatomic, getter=isEditingOnSystemPaper) BOOL editingOnSystemPaper;
@property (readonly, nonatomic) NSInteger editorIdentifier; // ivar: _editorIdentifier
@property (readonly, nonatomic) NSString *identifierDescription;
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSInteger viewAppearanceState; // ivar: _viewAppearanceState


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(NSInteger)arg0 options:(NSUInteger)arg1 nibName:(id)arg2 bundle:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)groupActivityDidChange;
-(void)noteDidAppear:(id)arg0 ;
-(void)noteDidDisappear:(id)arg0 ;
-(void)noteWillAppear:(id)arg0 ;
-(void)noteWillDisappear:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif