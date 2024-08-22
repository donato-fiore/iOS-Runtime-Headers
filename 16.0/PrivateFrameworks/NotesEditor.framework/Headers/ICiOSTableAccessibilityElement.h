// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIOSTABLEACCESSIBILITYELEMENT_H
#define ICIOSTABLEACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, NSString;
@protocol UIAccessibilityContainerDataTable;


#import "ICiOSTableAttachmentView.h"
#import "ICTableAccessibilityController.h"

@interface ICiOSTableAccessibilityElement : UIAccessibilityElement <UIAccessibilityContainerDataTable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ICiOSTableAttachmentView *parentAttachmentView; // ivar: _parentAttachmentView
@property (readonly) Class superclass;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController; // ivar: _tableAXController


-(BOOL)isAccessibilityElement;
-(NSInteger)accessibilityContainerType;
-(NSUInteger)accessibilityColumnCount;
-(NSUInteger)accessibilityRowCount;
-(id)accessibilityDataTableCellElementForRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)accessibilityElements;
-(id)accessibilityHeaderElementsForColumn:(NSUInteger)arg0 ;
-(id)accessibilityHeaderElementsForRow:(NSUInteger)arg0 ;
-(id)initWithTableAccessibilityController:(id)arg0 parentAttachmentView:(id)arg1 ;
-(struct CGRect )accessibilityFrame;


@end


#endif