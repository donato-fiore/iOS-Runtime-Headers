// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSECTIONPRESENTATIONDATA_H
#define GKSECTIONPRESENTATIONDATA_H


#import <Foundation/Foundation.h>


@interface GKSectionPresentationData : NSObject

@property (nonatomic) CGFloat footerMaxY; // ivar: _footerMaxY
@property (nonatomic) CGFloat footerMinY; // ivar: _footerMinY
@property (nonatomic) CGFloat headerMaxY; // ivar: _headerMaxY
@property (nonatomic) CGFloat headerMinY; // ivar: _headerMinY
@property (nonatomic) CGFloat itemsMaxY; // ivar: _itemsMaxY
@property (nonatomic) CGFloat itemsMinY; // ivar: _itemsMinY
@property (nonatomic) CGFloat maxY; // ivar: _maxY
@property (nonatomic) CGFloat minY; // ivar: _minY
@property (nonatomic) NSUInteger numFooters; // ivar: _numFooters
@property (nonatomic) NSUInteger numHeaders; // ivar: _numHeaders
@property (nonatomic) NSUInteger numItems; // ivar: _numItems
@property (nonatomic) NSUInteger numOverlays; // ivar: _numOverlays
@property (nonatomic) NSUInteger overlayOffset; // ivar: _overlayOffset
@property (nonatomic) NSInteger section; // ivar: _section
@property (nonatomic) CGFloat showMoreMaxY; // ivar: _showMoreMaxY


-(id)description;
-(id)initWithSection:(NSInteger)arg0 presentationData:(id)arg1 ;
-(void)updateWithLayoutAttributes:(id)arg0 supplementaryLocation:(NSUInteger)arg1 ;


@end


#endif