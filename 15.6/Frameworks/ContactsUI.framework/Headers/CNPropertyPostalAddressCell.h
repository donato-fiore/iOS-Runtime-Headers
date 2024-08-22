// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYPOSTALADDRESSCELL_H
#define CNPROPERTYPOSTALADDRESSCELL_H

@class UIImageView;
@protocol CNCancelable;


#import "CNPropertySimpleTransportCell.h"

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *mapImageView; // ivar: _mapImageView
@property (nonatomic) BOOL shouldUseMapTiles; // ivar: _shouldUseMapTiles
@property (retain, nonatomic) NSObject<CNCancelable> *tileGeneratorToken; // ivar: _tileGeneratorToken


-(BOOL)supportsTintColorValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(void)dealloc;
-(void)generateAndSetMapTile;
-(void)prepareForReuse;
-(void)setMapImage:(id)arg0 ;
-(void)setProperty:(id)arg0 ;
-(void)tapGesture:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif