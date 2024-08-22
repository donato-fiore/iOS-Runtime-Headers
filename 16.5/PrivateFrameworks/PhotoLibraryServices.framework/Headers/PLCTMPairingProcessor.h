// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCTMPAIRINGPROCESSOR_H
#define PLCTMPAIRINGPROCESSOR_H



#import "PLPairingProcessor.h"

@interface PLCTMPairingProcessor : PLPairingProcessor

@property (nonatomic) BOOL deferredProcessingNeeded; // ivar: _deferredProcessingNeeded


-(BOOL)_copyResourcesFromSoc:(id)arg0 toPrimary:(id)arg1 error:(*id)arg2 ;
-(id)_mapResourcesFromSoc:(id)arg0 toPrimary:(id)arg1 error:(*id)arg2 ;
-(id)combinePair:(id)arg0 error:(*id)arg1 ;
-(id)ctmFetchRequestWithPredicate:(id)arg0 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg0 ;
-(id)firstGroupFromAssets:(id)arg0 ;
-(id)groupIDForAsset:(id)arg0 ;
-(void)_installSocResourcesFromSoc:(id)arg0 toPrimary:(id)arg1 referencedResourceURLs:(id)arg2 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg0 ;


@end


#endif