// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSMARTWIDGETPREDICTION_H
#define DBSMARTWIDGETPREDICTION_H

@class CAFilter, UIImage, CARObserverHashTable, NSString, NSUUID, NSArray;
@protocol DBSmartWidgetPredictionDelegate;

#import <Foundation/Foundation.h>


@interface DBSmartWidgetPrediction : NSObject

@property (readonly, copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) CAFilter *compositingFilter; // ivar: _compositingFilter
@property (weak, nonatomic) NSObject<DBSmartWidgetPredictionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSInteger score;
@property (readonly, nonatomic) BOOL showImageBorder; // ivar: _showImageBorder
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSInteger tieBreakScore; // ivar: _tieBreakScore
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) NSArray *validRanges; // ivar: _validRanges


+(CGFloat)initialValidInterval;
+(NSInteger)_scoreFor:(CGFloat)arg0 minValue:(CGFloat)arg1 maxValue:(CGFloat)arg2 ;
+(SEL)isEqualClassSelector;
-(BOOL)_defaultIsEqualClass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPrediction:(id)arg0 ;
-(BOOL)updateWithPrediction:(id)arg0 ;
-(CGFloat)initialValidInterval;
-(CGFloat)maxValue;
-(CGFloat)minValue;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)predictionScore;
-(id)_debugScoreText;
-(id)debugScoreText;
-(id)debugValidRangesText;
-(id)defaultValidRanges;
-(id)description;
-(id)init;
-(id)predictedObjectDescription;
-(void)addObserver:(id)arg0 ;
-(void)invalidateValidIntervals;
-(void)predictionDidUpdate;
-(void)removeObserver:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateRangeIfNeeded:(id)arg0 ;


@end


#endif