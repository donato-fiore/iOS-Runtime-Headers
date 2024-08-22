// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITRACKLISTCOLUMNDATA_H
#define SKUITRACKLISTCOLUMNDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SKUITracklistColumnData : NSObject

@property (copy, nonatomic) NSArray *columns; // ivar: _columns
@property (nonatomic) CGFloat interColumnSpacing; // ivar: _interColumnSpacing
@property (nonatomic) CGFloat leftEdgeInset; // ivar: _leftEdgeInset
@property (nonatomic) CGFloat rightEdgeInset; // ivar: _rightEdgeInset


-(id)_initSKUITracklistColumnData;
-(id)columnForIdentifier:(NSInteger)arg0 ;
-(id)initWithRepresentativeTrack:(id)arg0 ;
-(id)viewElementsForTrack:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)adjustColumnsToFitWidth:(CGFloat)arg0 ;
-(void)enumerateColumnsForHeader:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateColumnsForTrack:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif