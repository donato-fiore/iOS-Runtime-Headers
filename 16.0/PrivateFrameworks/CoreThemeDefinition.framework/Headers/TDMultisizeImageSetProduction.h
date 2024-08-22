// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDMULTISIZEIMAGESETPRODUCTION_H
#define TDMULTISIZEIMAGESETPRODUCTION_H

@class NSSet;


#import "TDNamedArtworkProduction.h"

@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction

@property (retain, nonatomic) NSSet *multisizeImageSetRenditions;
@property (retain, nonatomic) NSSet *sizeIndexes;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)processRendition:(id)arg0 withBackstop:(id)arg1 ;


@end


#endif