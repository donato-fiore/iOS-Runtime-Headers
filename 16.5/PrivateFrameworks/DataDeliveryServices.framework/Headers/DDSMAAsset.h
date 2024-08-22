// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSMAASSET_H
#define DDSMAASSET_H

@class MAAsset;


#import "DDSAsset.h"

@interface DDSMAAsset : DDSAsset

@property (readonly, nonatomic) MAAsset *maAsset; // ivar: _maAsset


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMAAsset:(id)arg0 ;


@end


#endif