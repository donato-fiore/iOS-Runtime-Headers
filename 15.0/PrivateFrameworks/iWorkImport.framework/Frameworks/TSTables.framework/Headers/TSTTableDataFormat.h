// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATAFORMAT_H
#define TSTTABLEDATAFORMAT_H



#import "TSTTableDataObject.h"

@interface TSTTableDataFormat : TSTTableDataObject



+(id)objectWithFormat:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)description;
-(id)format;
-(id)initObjectWithFormat:(id)arg0 refCount:(unsigned int)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;
-(void)p_setUpFormat:(id)arg0 ;


@end


#endif