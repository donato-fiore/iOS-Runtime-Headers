// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATACUSTOMFORMAT_H
#define TSTTABLEDATACUSTOMFORMAT_H



#import "TSTTableDataObject.h"

@interface TSTTableDataCustomFormat : TSTTableDataObject



+(id)objectWithCustomFormat:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)customFormat;
-(id)description;
-(id)initObjectWithCustomFormat:(id)arg0 refCount:(unsigned int)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif