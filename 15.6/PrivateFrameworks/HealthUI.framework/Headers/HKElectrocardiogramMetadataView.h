// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMMETADATAVIEW_H
#define HKELECTROCARDIOGRAMMETADATAVIEW_H

@class UIView, HKElectrocardiogram;
@protocol HKElectrocardiogramMetadataViewDelegate;



@interface HKElectrocardiogramMetadataView : UIView

@property (readonly, nonatomic) BOOL allowExportToPDF; // ivar: _allowExportToPDF
@property (weak, nonatomic) NSObject<HKElectrocardiogramMetadataViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL displayGraph; // ivar: _displayGraph
@property (readonly, nonatomic) BOOL isSharedData; // ivar: _isSharedData
@property (readonly, nonatomic) HKElectrocardiogram *sample; // ivar: _sample


-(id)_bulletedTextView;
-(id)_ecgChart;
-(id)_footerLabel;
-(id)_separatorLine;
-(id)_sharePDFControl;
-(id)initWithSample:(id)arg0 activeAlgorithmVersion:(NSInteger)arg1 displayGraph:(BOOL)arg2 allowExportToPDF:(BOOL)arg3 isSharedData:(BOOL)arg4 delegate:(id)arg5 ;
-(void)_setupUIWithActiveAlgorithmVersion:(NSInteger)arg0 ;
-(void)detailButtonTapped:(id)arg0 ;
-(void)sharedPDFControlTapped:(id)arg0 ;


@end


#endif