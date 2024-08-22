// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRECOGNITIONDATACOLLECTIONVIEWCONTROLLER_H
#define PKRECOGNITIONDATACOLLECTIONVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSLayoutConstraint, NSString, UILabel, NSArray, NSDictionary, UIScrollView;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource;



@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // ivar: _collectionViewHeightConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSArray *drawingImages; // ivar: _drawingImages
@property (retain, nonatomic) NSArray *drawings; // ivar: _drawings
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDrawings:(id)arg0 metadata:(id)arg1 ;
-(id)saveDataForDrawings:(id)arg0 baseURL:(id)arg1 shouldSaveRecognitionData:(BOOL)arg2 ;
-(id)synchronousImageForDrawing:(id)arg0 ;
-(void)adjustCollectionViewHeight;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg0 ;
-(void)openTapToRadarWithTempDirectoryURL:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)sendRadarButtonTapped:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif