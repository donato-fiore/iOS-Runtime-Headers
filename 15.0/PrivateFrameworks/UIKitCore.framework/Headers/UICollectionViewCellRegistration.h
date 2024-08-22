// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWCELLREGISTRATION_H
#define UICOLLECTIONVIEWCELLREGISTRATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UINib.h"

@interface UICollectionViewCellRegistration : NSObject

@property (readonly, weak, nonatomic) UICollectionView *_collectionViewRequestingViewWhenCreated; // ivar: __collectionViewRequestingViewWhenCreated
@property (readonly, nonatomic) Class cellClass; // ivar: _cellClass
@property (readonly, nonatomic) UINib *cellNib; // ivar: _cellNib
@property (readonly, nonatomic) id *configurationHandler; // ivar: _configurationHandler
@property (readonly, nonatomic) BOOL hasCellClass;
@property (readonly, nonatomic) BOOL hasCellNib;
@property (readonly, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier


+(id)registrationWithCellClass:(Class)arg0 configurationHandler:(id)arg1 ;
+(id)registrationWithCellNib:(id)arg0 configurationHandler:(id)arg1 ;
// -(id)initWithCellClass:(Class)arg0 cellNib:(id)arg1 configurationHandler:(id)arg2 reuseIdentifier:(unk)arg3  ;


@end


#endif