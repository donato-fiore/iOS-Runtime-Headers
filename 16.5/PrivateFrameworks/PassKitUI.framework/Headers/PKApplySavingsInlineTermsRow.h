// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYSAVINGSINLINETERMSROW_H
#define PKAPPLYSAVINGSINLINETERMSROW_H

@class PKApplyFooterContent, NSString;
@protocol PKApplyCollectionViewRow, PKApplyInlineFooterSectionControllerDelegate, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplySavingsInlineTermsRow : NSObject <PKApplyCollectionViewRow>

 {
    PKApplyFooterContent *_content;
    id<PKApplyInlineFooterSectionControllerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(Class)cellClass;
-(id)initWithContent:(id)arg0 delegate:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)didTapFooterLink:(id)arg0 ;


@end


#endif