// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTSTROKEPROVIDER_H
#define PKTEXTINPUTSTROKEPROVIDER_H

@class NSNumber;


#import "PKStrokeProvider.h"

@interface PKTextInputStrokeProvider : PKStrokeProvider {
    NSNumber *_versionNumber;
}


@property (readonly, retain) NSNumber *strokeProviderVersion;


-(BOOL)containsStrokeWithUUID:(id)arg0 ;
-(BOOL)slicesWithIdentifiers:(id)arg0 significantlyOverlapRect:(struct CGRect )arg1 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)strokesForSliceIdentifiers:(id)arg0 ;
-(struct CGPoint )centroidForSlicesWithIdentifiers:(id)arg0 ;
-(struct CGPoint )startingPointForSlicesWithIdentifiers:(id)arg0 ;
-(struct CGRect )boundsForSliceIdentifiers:(id)arg0 ;


@end


#endif