// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTSEARCHLISTCONTROLLER_H
#define _UIDOCUMENTSEARCHLISTCONTROLLER_H

@class UIDocumentListController, NSString;


#import "_UIDocumentPickerSearchContainerModel.h"

@interface _UIDocumentSearchListController : UIDocumentListController {
    _UIDocumentPickerSearchContainerModel *_model;
}


@property (retain, nonatomic) NSString *queryString;


+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)itemsOrSelectionDidChange:(BOOL)arg0 ;


@end


#endif