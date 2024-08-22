// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSGROUPNAMECELL_H
#define CKDETAILSGROUPNAMECELL_H

@class NSString;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"
#import "CKDetailsAddGroupNameView.h"

@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKDetailsAddGroupNameView *groupNameView; // ivar: _groupNameView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)_ckSymbolImageNamed:(id)arg0 preferredContentSizeCategory:(id)arg1 preferredFontTextStyle:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif