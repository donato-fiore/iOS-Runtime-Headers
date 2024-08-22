// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVLAZYVALUELOADINGMETADATAITEM_H
#define AVLAZYVALUELOADINGMETADATAITEM_H



#import "AVMetadataItem.h"
#import "AVLazyValueLoadingMetadataItemInternal.h"

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}




+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg0 valueLoadingHandler:(id)arg1 ;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg0 ;
-(NSInteger)_valueStatus;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)_initWithFigMetadataDictionary:(id)arg0 valueLoadingHandler:(id)arg1 ;
-(id)dataType;
-(id)value;
-(void)_valueRequestDidFinish;
-(void)_waitForLoadingOfValueDependentKey:(id)arg0 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif