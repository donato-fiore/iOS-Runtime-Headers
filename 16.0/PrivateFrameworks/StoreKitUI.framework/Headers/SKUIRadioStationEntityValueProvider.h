// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIRADIOSTATIONENTITYVALUEPROVIDER_H
#define SKUIRADIOSTATIONENTITYVALUEPROVIDER_H

@class NSString, RadioStation;
@protocol IKEntityValueProviding;

#import <Foundation/Foundation.h>


@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RadioStation *station; // ivar: _station
@property (readonly) Class superclass;


-(id)entityUniqueIdentifier;
-(id)imageURLForEntityArtworkProperty:(id)arg0 fittingSize:(struct CGSize )arg1 destinationScale:(CGFloat)arg2 ;
-(id)init;
-(id)initWithStation:(id)arg0 ;
-(id)rsep_coreSeedName;
-(id)valueForEntityProperty:(id)arg0 ;
-(id)valuesForEntityProperties:(id)arg0 ;


@end


#endif