// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDMULTISIZEIMAGERENDITIONSPEC_H
#define TDMULTISIZEIMAGERENDITIONSPEC_H



#import "TDSimpleArtworkRenditionSpec.h"
#import "TDMultisizeImageSetRenditionSpec.h"
#import "TDMultisizeImageSetSizeIndex.h"

@interface TDMultisizeImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDMultisizeImageSetRenditionSpec *multisizeImageSetRendition;
@property (retain, nonatomic) TDMultisizeImageSetSizeIndex *sizeIndex;




@end


#endif