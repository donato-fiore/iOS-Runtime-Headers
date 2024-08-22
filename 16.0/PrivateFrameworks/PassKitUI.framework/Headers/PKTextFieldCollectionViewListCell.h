// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTFIELDCOLLECTIONVIEWLISTCELL_H
#define PKTEXTFIELDCOLLECTIONVIEWLISTCELL_H

@class UICollectionViewListCell, NSString;
@protocol PKListTextFieldContentViewDelegate, PKTextFieldCollectionViewListCellDelegate;



@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PKTextFieldCollectionViewListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 forContentView:(id)arg1 ;
-(id)_textFieldContentView;
-(id)textFieldText;
-(void)beginEditing;
-(void)endEditing;
-(void)prepareForReuse;
-(void)resetTextFieldTextFromLabel;
-(void)setToolbarItems:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 forContentView:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 forContentView:(id)arg1 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif