// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBARSPEC_H
#define PXBARSPEC_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"

@interface PXBarSpec : NSObject <NSCopying>



@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(id)sortedBarItemsByPlacement:(id)arg0 ;


@end


#endif