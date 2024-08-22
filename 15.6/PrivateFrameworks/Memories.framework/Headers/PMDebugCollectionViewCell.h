// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMDEBUGCOLLECTIONVIEWCELL_H
#define PMDEBUGCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, PHAsset, UILabel, NSString, UIImageView;
@protocol PMDebugCollectionViewControllerProtocol;



@interface PMDebugCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) UILabel *data1Label; // ivar: _data1Label
@property (retain, nonatomic) UILabel *data2Label; // ivar: _data2Label
@property (retain, nonatomic) UILabel *data3Label; // ivar: _data3Label
@property (retain, nonatomic) UILabel *date1Label; // ivar: _date1Label
@property (retain, nonatomic) UILabel *date2Label; // ivar: _date2Label
@property (retain, nonatomic) UILabel *date3Label; // ivar: _date3Label
@property (weak, nonatomic) NSObject<PMDebugCollectionViewControllerProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *editStyleStr; // ivar: _editStyleStr
@property (retain, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView


+(BOOL)hasOneGBRAM;
-(NSUInteger)countMediaClips:(BOOL)arg0 ;
-(id)_printImageOrientationforAsset:(id)arg0 ;
-(id)determineDerivativeUsedFromAsset:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringForAssetCollectionSubType:(NSInteger)arg0 ;
-(id)stringForAssetCollectionTypeString:(NSInteger)arg0 ;
-(id)stringForSize:(NSUInteger)arg0 ;
-(id)tVsDurationGraph;
-(struct ? )_stingerTime;
-(void)awakeFromNib;
-(void)configureHeader:(BOOL)arg0 ;
-(void)configureWithAsset:(id)arg0 pickInfo:(id)arg1 delegate:(id)arg2 indexPath:(id)arg3 isSaveMode:(BOOL)arg4 textOnly:(BOOL)arg5 curatedAssets:(id)arg6 ;
-(void)strokeToverMaxT:(float)arg0 inRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;


@end


#endif