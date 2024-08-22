// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDSLICE_H
#define TDSLICE_H

@class NSManagedObject, NSString;


#import "TDElementProduction.h"
#import "TDRenditionSpec.h"

@interface TDSlice : NSManagedObject {
    CGRect _sliceRect;
}


@property (nonatomic) CGRect primitiveSliceRect;
@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionSpec *rendition;
@property (nonatomic) CGRect sliceRect;
@property (retain, nonatomic) NSString *sliceRectString;


-(void)awakeFromFetch;


@end


#endif