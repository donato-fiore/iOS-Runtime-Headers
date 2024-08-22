// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMTOP_H
#define EMTOP_H

@protocol OIProgressiveReaderDelegate;


#import "QLTop.h"
#import "EMWorkbookMapper.h"

@interface EMTop : QLTop <OIProgressiveReaderDelegate>



@property (readonly) EMWorkbookMapper *mapper;


+(BOOL)supportsProgressiveMapping;
-(Class)mapperClassForIndexing:(BOOL)arg0 ;
-(Class)readerClassForBinaryDocuments;
-(Class)readerClassForXMLDocuments;
-(Class)stateClass;
-(void)initializeClasses;
-(void)readFile:(id)arg0 orData:(id)arg1 dataFileName:(id)arg2 format:(NSUInteger)arg3 archiver:(id)arg4 forIndexing:(BOOL)arg5 ;
-(void)readerDidStartDocument:(id)arg0 withElementCount:(NSInteger)arg1 ;


@end


#endif