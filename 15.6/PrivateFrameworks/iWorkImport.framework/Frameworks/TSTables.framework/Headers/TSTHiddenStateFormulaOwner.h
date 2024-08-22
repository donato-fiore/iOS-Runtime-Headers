// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHIDDENSTATEFORMULAOWNER_H
#define TSTHIDDENSTATEFORMULAOWNER_H

@class TSPObject, NSArray;



@interface TSTHiddenStateFormulaOwner : TSPObject

@property (nonatomic) BOOL needsToUpdateFilterSetForImport; // ivar: _needsToUpdateFilterSetForImport
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (retain, nonatomic) NSArray *thresholdCellValues; // ivar: _thresholdCellValues


-(id)initWithContext:(id)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif