// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSELECTEDRANGELABEL_H
#define HKSELECTEDRANGELABEL_H

@class UILabel;



@interface HKSelectedRangeLabel : UILabel

@property (nonatomic) UIEdgeInsets padding; // ivar: _padding


+(id)_attributedMultiplePrefixStringForSelectedRangeData:(id)arg0 attributedString:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 ;
+(id)_attributedStringForSelectedRangeData:(id)arg0 font:(id)arg1 foregroundColor:(id)arg2 prefixColor:(id)arg3 prefersImageAffixes:(BOOL)arg4 embedded:(BOOL)arg5 ;
+(id)_stringForSelectedRangeData:(id)arg0 embedded:(BOOL)arg1 ;
+(id)attributedStringForSelectedRangeData:(id)arg0 font:(id)arg1 foregroundColor:(id)arg2 prefixColor:(id)arg3 prefersImageAffixes:(BOOL)arg4 ;
+(id)standardPrefixColorForSelectedRangeData:(id)arg0 defaultColor:(id)arg1 ;
+(void)clearCaches;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)setSelectedRangeData:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif