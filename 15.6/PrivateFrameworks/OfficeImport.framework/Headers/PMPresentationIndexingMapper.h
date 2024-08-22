// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPRESENTATIONINDEXINGMAPPER_H
#define PMPRESENTATIONINDEXINGMAPPER_H



#import "CMIndexingMapper.h"
#import "PDPresentation.h"

@interface PMPresentationIndexingMapper : CMIndexingMapper

@property (readonly) PDPresentation *document;


-(void)_indexDrawable:(id)arg0 intoString:(id)arg1 ;
-(void)_indexSlide:(id)arg0 intoString:(id)arg1 ;
-(void)_indexTable:(id)arg0 intoString:(id)arg1 ;
-(void)_indexTextBody:(id)arg0 intoString:(id)arg1 ;
-(void)mapElement:(id)arg0 atIndex:(NSUInteger)arg1 withState:(id)arg2 isLastElement:(BOOL)arg3 ;
-(void)mapWithState:(id)arg0 ;


@end


#endif