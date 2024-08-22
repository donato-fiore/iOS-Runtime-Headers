// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWSUPPLEMENTARYREGISTRATION_H
#define UICOLLECTIONVIEWSUPPLEMENTARYREGISTRATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UINib.h"

@interface UICollectionViewSupplementaryRegistration : NSObject

@property (readonly, weak, nonatomic) UICollectionView *_collectionViewRequestingViewWhenCreated; // ivar: __collectionViewRequestingViewWhenCreated
@property (readonly, nonatomic) id *configurationHandler; // ivar: _configurationHandler
@property (readonly, nonatomic) NSString *elementKind; // ivar: _elementKind
@property (readonly, nonatomic) BOOL hasSupplementaryClass;
@property (readonly, nonatomic) BOOL hasSupplementaryNib;
@property (readonly, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (readonly, nonatomic) Class supplementaryClass; // ivar: _supplementaryClass
@property (readonly, nonatomic) UINib *supplementaryNib; // ivar: _supplementaryNib


+(id)registrationWithSupplementaryClass:(Class)arg0 elementKind:(id)arg1 configurationHandler:(id)arg2 ;
+(id)registrationWithSupplementaryNib:(id)arg0 elementKind:(id)arg1 configurationHandler:(id)arg2 ;
// -(id)initWithSupplementaryClass:(Class)arg0 supplementaryNib:(id)arg1 elementKind:(id)arg2 configurationHandler:(id)arg3 reuseIdentifier:(unk)arg4  ;


@end


#endif