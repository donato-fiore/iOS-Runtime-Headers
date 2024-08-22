// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMTOP_H
#define PMTOP_H

@protocol OIProgressiveReaderDelegate;


#import "QLTop.h"

@interface PMTop : QLTop <OIProgressiveReaderDelegate>





+(BOOL)supportsProgressiveMapping;
-(BOOL)isCancelled;
-(Class)mapperClassForIndexing:(BOOL)arg0 ;
-(Class)readerClassForBinaryDocuments;
-(Class)readerClassForXMLDocuments;
-(Class)stateClass;
-(void)initializeClasses;
-(void)readFile:(id)arg0 orData:(id)arg1 dataFileName:(id)arg2 format:(NSUInteger)arg3 archiver:(id)arg4 forIndexing:(BOOL)arg5 ;


@end


#endif