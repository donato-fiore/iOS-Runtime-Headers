// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTUIROWTABLEVIEWCELL_H
#define PTUIROWTABLEVIEWCELL_H

@class UITableViewCell, NSString, PTRow;
@protocol PTRowObserver;



@interface PTUIRowTableViewCell : UITableViewCell <PTRowObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PTRow *row; // ivar: _row
@property (readonly) Class superclass;


+(CGFloat)cellHeightForRow:(id)arg0 ;
+(NSInteger)cellStyleForRow:(id)arg0 ;
+(id)reuseIdentifierForRow:(id)arg0 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)rowDidChangeImage:(id)arg0 ;
-(void)rowDidChangeTitle:(id)arg0 ;
-(void)rowDidChangeValue:(id)arg0 ;
-(void)rowDidReload:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
-(void)updateDisplayedValue;


@end


#endif