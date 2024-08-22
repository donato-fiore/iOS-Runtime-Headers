// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18CREATEMLCOMPONENTS22DATAFRAMEBATCHPROVIDER_H
#define _TTC18CREATEMLCOMPONENTS22DATAFRAMEBATCHPROVIDER_H

@class SwiftObject;
@protocol MLBatchProvider;



@interface _TtC18CreateMLComponents22DataFrameBatchProvider : SwiftObject <MLBatchProvider>

 {
    ? featureColumns;
}


@property (nonatomic, readonly) NSInteger count; // ivar: count


-(id)featuresAtIndex:(NSInteger)arg0 ;


@end


#endif