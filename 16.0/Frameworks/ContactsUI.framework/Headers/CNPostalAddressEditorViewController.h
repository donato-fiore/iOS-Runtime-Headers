// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPOSTALADDRESSEDITORVIEWCONTROLLER_H
#define CNPOSTALADDRESSEDITORVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, NSString, CNMutableContact;
@protocol CNPresenterDelegate, CNPropertyCellDelegate;


#import "CNCardPropertyGroup.h"

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate>

 {
    NSMutableArray *_propertyItems;
    NSString *_propertyKey;
    CNMutableContact *_contact;
    CNCardPropertyGroup *_propertyGroup;
    BOOL _editNames;
    BOOL _editingExistingContact;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isPresentingModalViewController;
@property (readonly) Class superclass;


+(id)cellIdentifierForClass:(Class)arg0 ;
+(id)cellIdentifierForEditingProperty:(id)arg0 ;
-(CGFloat)tableViewSpacingForExtraSeparators:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)contactViewCache;
-(id)initWithContact:(id)arg0 propertyKey:(id)arg1 editNames:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_rebuildPropertyGroupItems:(BOOL)arg0 ;
-(void)_startEditingFirstCell;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewLabel:(id)arg2 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewValue:(id)arg2 ;
-(void)propertyCell:(id)arg0 performActionForItem:(id)arg1 withTransportType:(NSInteger)arg2 ;
-(void)propertyCellDidChangeLayout:(id)arg0 ;
-(void)registerContactCellClass:(Class)arg0 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)validateContents;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif