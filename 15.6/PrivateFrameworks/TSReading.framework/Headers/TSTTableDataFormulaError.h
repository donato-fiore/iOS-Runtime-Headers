// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEDATAFORMULAERROR_H
#define TSTTABLEDATAFORMULAERROR_H



#import "TSTTableDataObject.h"
#import "TSWPStorage.h"

@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage *mFormulaError;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithFormulaError:(id)arg0 ;
-(void)dealloc;


@end


#endif