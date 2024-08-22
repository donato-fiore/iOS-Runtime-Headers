// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPICONCOLLECTIONVIEWCELL_H
#define CKAPPICONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, NSMutableArray;


#import "CKAppIconView.h"

@interface CKAppIconCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKAppIconView *appContentView; // ivar: _appContentView
@property (retain, nonatomic) UIImageView *appIconView; // ivar: _appIconView
@property (nonatomic) NSInteger appName; // ivar: _appName
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints


+(id)reuseIdentifier;
-(id)appIconForBundleID:(id)arg0 ;
-(void)configureWithAppName:(NSInteger)arg0 ;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif