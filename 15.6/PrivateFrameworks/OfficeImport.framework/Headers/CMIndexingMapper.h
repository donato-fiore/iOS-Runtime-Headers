// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMINDEXINGMAPPER_H
#define CMINDEXINGMAPPER_H



#import "CMDocumentMapper.h"

@interface CMIndexingMapper : CMDocumentMapper



-(void)finishMappingWithState:(id)arg0 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)mapSummaryWithState:(id)arg0 ;
-(void)mapWithState:(id)arg0 ;
-(void)startMappingWithState:(id)arg0 ;


@end


#endif