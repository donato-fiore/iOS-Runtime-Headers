// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSUPPLEMENTARYVIEWMETRICS_H
#define GKSUPPLEMENTARYVIEWMETRICS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKSupplementaryViewMetrics : NSObject <NSCopying>



@property (nonatomic) NSInteger animateWithSection; // ivar: _animateWithSection
@property (nonatomic) SEL configurator; // ivar: _configurator
@property (nonatomic) CGFloat desiredHeight; // ivar: _desiredHeight
@property (nonatomic) CGFloat desiredWidth; // ivar: _desiredWidth
@property (nonatomic) _NSRange globalSectionRange; // ivar: _globalSectionRange
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *kind; // ivar: _kind
@property (nonatomic) Class reusableViewClass; // ivar: _reusableViewClass
@property (nonatomic) BOOL shouldPin; // ivar: _shouldPin
@property (nonatomic) BOOL shouldPinGlobal; // ivar: _shouldPinGlobal
@property (nonatomic) BOOL shouldUseGlobalIndexing; // ivar: _shouldUseGlobalIndexing
@property (nonatomic) id *target; // ivar: _target


+(id)supplementaryMetrics;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)localDescription;
-(struct CGSize )sizeForCollectionView:(id)arg0 ;


@end


#endif