// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCMATHTABLECELLEXPRESSION_H
#define SCRCMATHTABLECELLEXPRESSION_H



#import "SCRCMathRowExpression.h"

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {
    BOOL _didGetTablePosition;
    NSUInteger _rowIndex;
    NSUInteger _columnIndex;
    NSUInteger _tableRowCount;
    NSUInteger _tableColumnCount;
}




-(id)_prefixForCell;
-(id)_suffixForCell;
-(id)mathMLTag;
-(id)prefixForChildAtIndex:(NSUInteger)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)suffixForChildAtIndex:(NSUInteger)arg0 ;
-(void)_getTableDataIfNecessary;


@end


#endif