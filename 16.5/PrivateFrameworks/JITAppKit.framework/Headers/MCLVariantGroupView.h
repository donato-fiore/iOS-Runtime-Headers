// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLVARIANTGROUPVIEW_H
#define MCLVARIANTGROUPVIEW_H

@class UIView, NSMutableArray;



@interface MCLVariantGroupView : UIView {
    NSMutableArray *_buttons;
    NSMutableArray *_buttonConstraints;
    NSInteger _selectedIndex;
}


@property (nonatomic) BOOL actionVariant; // ivar: _actionVariant
@property (retain, nonatomic) Class buttonClass; // ivar: _buttonClass
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (nonatomic) NSInteger variantCount; // ivar: _variantCount
@property (nonatomic) NSInteger variantsPerLine; // ivar: _variantsPerLine


-(id)createVariantButton:(Class)arg0 type:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearVariants;
-(void)reloadData;
-(void)selectItemAtIndex:(NSInteger)arg0 ;
-(void)selectVariant:(id)arg0 ;


@end


#endif