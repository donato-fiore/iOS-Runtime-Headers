// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKGROUPPHOTOCELL_H
#define CKGROUPPHOTOCELL_H

@class NSString, UIView;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKGroupPhotoCell : CKDetailsCell <CKDetailsCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *groupView; // ivar: _groupView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif