// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDMULTISIZEIMAGESETSIZEINDEX_H
#define TDMULTISIZEIMAGESETSIZEINDEX_H

@class NSManagedObject, NSSet;


#import "TDMultisizeImageSetProduction.h"

@interface TDMultisizeImageSetSizeIndex : NSManagedObject

@property (nonatomic) int height;
@property (retain, nonatomic) NSSet *imageRenditions;
@property (nonatomic) short index;
@property (retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (retain, nonatomic) NSSet *multisizeImageSetRenditions;
@property (nonatomic) int width;




@end


#endif