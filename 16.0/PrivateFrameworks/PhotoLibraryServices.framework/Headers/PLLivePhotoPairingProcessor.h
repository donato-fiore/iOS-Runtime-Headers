// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIVEPHOTOPAIRINGPROCESSOR_H
#define PLLIVEPHOTOPAIRINGPROCESSOR_H



#import "PLPairingProcessor.h"

@interface PLLivePhotoPairingProcessor : PLPairingProcessor



-(id)combinePair:(id)arg0 error:(*id)arg1 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg0 ;
-(id)firstGroupFromAssets:(id)arg0 ;
-(id)groupIDForAsset:(id)arg0 ;
-(id)livePhotoFetchRequestWithPredicate:(id)arg0 ;


@end


#endif