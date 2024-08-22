// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSHEETREFERENCE_H
#define EDSHEETREFERENCE_H



#import "EDReference.h"

@interface EDSheetReference : EDReference {
    NSUInteger mSheetIndex;
}




+(id)referenceWithSheetIndex:(NSUInteger)arg0 firstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(BOOL)fullyAdjacentToReference:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTableReference:(id)arg0 ;
-(BOOL)isSheedIndexValid;
-(NSUInteger)hash;
-(NSUInteger)sheetIndex;
-(id)description;
-(id)init;
-(id)initWithSheetIndex:(NSUInteger)arg0 firstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(void)unionWithReference:(id)arg0 ;


@end


#endif