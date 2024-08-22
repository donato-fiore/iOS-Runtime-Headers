// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDMULTISIZEIMAGESETRENDITIONSPEC_H
#define TDMULTISIZEIMAGESETRENDITIONSPEC_H

@class NSSet;


#import "TDRenditionSpec.h"
#import "TDMultisizeImageSetProduction.h"

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSSet *multisizeImageRenditions;
@property (retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif