// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPUNIONCOLLECTION_H
#define FPUNIONCOLLECTION_H

@class NSArray;


#import "FPItemCollection.h"

@interface FPUnionCollection : FPItemCollection

@property (retain, nonatomic) NSArray *collections; // ivar: _collections


-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)description;
-(id)initWithCollections:(id)arg0 ;


@end


#endif