// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEDATAFORMULAERROR_H
#define TSTTABLEDATAFORMULAERROR_H



#import "TSTTableDataObject.h"

@interface TSTTableDataFormulaError : TSTTableDataObject



+(id)objectWithFormulaError:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)description;
-(id)formulaError;
-(id)initObjectWithFormulaError:(id)arg0 refCount:(unsigned int)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif