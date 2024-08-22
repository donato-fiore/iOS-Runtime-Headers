// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMWORKBOOKINDEXINGMAPPER_H
#define EMWORKBOOKINDEXINGMAPPER_H



#import "CMIndexingMapper.h"
#import "EDWorkbook.h"

@interface EMWorkbookIndexingMapper : CMIndexingMapper

@property (readonly) EDWorkbook *document;


-(void)finishMappingWithState:(id)arg0 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)setElementCount:(NSUInteger)arg0 ;


@end


#endif