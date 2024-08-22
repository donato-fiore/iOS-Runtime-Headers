// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYINLINEFOOTERSECTIONCONTROLLER_H
#define PKAPPLYINLINEFOOTERSECTIONCONTROLLER_H

@class PKApplyFooterContent, NSString;
@protocol PKApplyInlineFooterSectionControllerDelegate;


#import "PKApplyCollectionViewSectionController.h"

@interface PKApplyInlineFooterSectionController : PKApplyCollectionViewSectionController <PKApplyInlineFooterSectionControllerDelegate>

 {
    id<PKApplyInlineFooterSectionControllerDelegate> *_delegate;
    PKApplyFooterContent *_content;
    NSString *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)identifiers;
-(id)initWithController:(id)arg0 applyPage:(id)arg1 content:(id)arg2 delegate:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureContentSection:(id)arg0 ;
-(void)didTapFooterLink:(id)arg0 ;


@end


#endif