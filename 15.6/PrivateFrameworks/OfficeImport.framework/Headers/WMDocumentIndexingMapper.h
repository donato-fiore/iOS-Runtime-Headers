// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WMDOCUMENTINDEXINGMAPPER_H
#define WMDOCUMENTINDEXINGMAPPER_H



#import "CMIndexingMapper.h"
#import "WDDocument.h"

@interface WMDocumentIndexingMapper : CMIndexingMapper

@property (readonly) WDDocument *document;


-(void)_indexBlock:(id)arg0 intoString:(id)arg1 ;
-(void)_indexTable:(id)arg0 intoString:(id)arg1 ;
-(void)_indexText:(id)arg0 intoString:(id)arg1 ;
-(void)mapWithState:(id)arg0 ;


@end


#endif