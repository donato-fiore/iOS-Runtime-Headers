// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPTEXTLINEMERGE_H
#define CPTEXTLINEMERGE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CPTextLineMerge : NSObject {
    NSMutableArray *avail;
}




-(BOOL)fits:(id)arg0 into:(id)arg1 ;
-(BOOL)hasOverlappingLines;
-(CGFloat)averageHeight:(id)arg0 ;
-(id)findLineFor:(id)arg0 in:(id)arg1 ;
-(unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg0 in:(id)arg1 ;
-(void)addInterval:(id)arg0 to:(id)arg1 ;
-(void)detachDropCaps:(id)arg0 to:(id)arg1 ;
-(void)dropCaps:(id)arg0 to:(id)arg1 ;
-(void)eliminate:(id)arg0 ;
-(void)makeOverlappingLinesTo:(id)arg0 ;
-(void)mergeByColumn:(id)arg0 ;
-(void)mergeColumn:(id)arg0 overlapping:(id)arg1 ;
-(void)mergeLinesIn:(id)arg0 ;
-(void)mergeLinesInInterval:(id)arg0 from:(id)arg1 ;
-(void)removeOverlapping:(id)arg0 ;


@end


#endif