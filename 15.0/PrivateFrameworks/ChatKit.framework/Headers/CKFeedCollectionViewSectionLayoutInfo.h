// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFEEDCOLLECTIONVIEWSECTIONLAYOUTINFO_H
#define CKFEEDCOLLECTIONVIEWSECTIONLAYOUTINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKFeedCollectionViewSectionLayoutInfo : NSObject

@property (nonatomic) NSInteger firstJoinedSection; // ivar: _firstJoinedSection
@property (retain, nonatomic) NSArray *fixedLayoutAttributes; // ivar: _fixedLayoutAttributes
@property (retain, nonatomic) NSArray *floatingLayoutAttributes; // ivar: _floatingLayoutAttributes
@property (nonatomic) CGSize footerSize; // ivar: _footerSize
@property (readonly, nonatomic) CGRect frame;
@property (retain, nonatomic) id *groupID; // ivar: _groupID
@property (nonatomic) CGSize headerSize; // ivar: _headerSize
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) NSInteger lastJoinedSection; // ivar: _lastJoinedSection
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (nonatomic) NSInteger nextVisibleSection; // ivar: _nextVisibleSection
@property (nonatomic) NSInteger numberOfTilesOmitted; // ivar: _numberOfTilesOmitted
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (nonatomic) NSInteger previousVisibleSection; // ivar: _previousVisibleSection
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSArray *tileLayoutAttributes; // ivar: _tileLayoutAttributes


-(id)init;


@end


#endif