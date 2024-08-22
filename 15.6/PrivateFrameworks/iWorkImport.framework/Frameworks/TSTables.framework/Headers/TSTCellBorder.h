// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLBORDER_H
#define TSTCELLBORDER_H

@class TSDStroke, NSString;
@protocol TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying;

#import <Foundation/Foundation.h>


@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying>

 {
    BOOL _definedTopStrokeOrder;
    BOOL _definedRightStrokeOrder;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStrokeOrder;
}


@property (readonly, nonatomic) TSDStroke *bottomStroke; // ivar: _bottomStroke
@property (readonly, nonatomic) int bottomStrokeOrder; // ivar: _bottomStrokeOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL definedBottomStroke; // ivar: _definedBottomStroke
@property (readonly, nonatomic) BOOL definedLeftStroke; // ivar: _definedLeftStroke
@property (readonly, nonatomic) BOOL definedRightStroke; // ivar: _definedRightStroke
@property (readonly, nonatomic) BOOL definedTopStroke; // ivar: _definedTopStroke
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDStroke *leftStroke; // ivar: _leftStroke
@property (readonly, nonatomic) int leftStrokeOrder; // ivar: _leftStrokeOrder
@property (readonly, nonatomic) TSDStroke *rightStroke; // ivar: _rightStroke
@property (readonly, nonatomic) int rightStrokeOrder; // ivar: _rightStrokeOrder
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSDStroke *topStroke; // ivar: _topStroke
@property (readonly, nonatomic) int topStrokeOrder; // ivar: _topStrokeOrder


+(id)cellBorder;
+(id)cellBorderForResettingAllStrokes;
+(id)cellDiffProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 ;
-(void)_clearBottomStroke;
-(void)_clearLeftStroke;
-(void)_clearRightStroke;
-(void)_clearTopStroke;
-(void)applyToCell:(id)arg0 ;
-(void)didInitFromSOS;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif