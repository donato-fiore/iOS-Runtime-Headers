// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDCUSTOMASSET_H
#define TDCUSTOMASSET_H

@class NSString;


#import "TDPNGAsset.h"

@interface TDCustomAsset : TDPNGAsset

@property (retain, nonatomic) NSString *referenceData;


-(id)sourceImageWithDocument:(id)arg0 ;
-(struct CGSize )sourceImageSizeWithDocument:(id)arg0 ;


@end


#endif