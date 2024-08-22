// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUNIONCOLLECTION_H
#define FPUNIONCOLLECTION_H

@class NSArray;


#import "FPItemCollection.h"

@interface FPUnionCollection : FPItemCollection {
    NSArray *_collections;
}


@property (retain, nonatomic) NSArray *collections;


-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)description;
-(id)initWithCollections:(id)arg0 ;


@end


#endif