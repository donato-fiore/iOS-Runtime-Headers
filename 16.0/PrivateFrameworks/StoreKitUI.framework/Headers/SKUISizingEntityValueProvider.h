// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISIZINGENTITYVALUEPROVIDER_H
#define SKUISIZINGENTITYVALUEPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol IKEntityValueProviding;

#import <Foundation/Foundation.h>


@interface SKUISizingEntityValueProvider : NSObject <IKEntityValueProviding>

 {
    NSMutableDictionary *_tallestValues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)entityUniqueIdentifier;
-(id)imageURLForEntityArtworkProperty:(id)arg0 fittingSize:(struct CGSize )arg1 destinationScale:(CGFloat)arg2 ;
-(id)initForViewElement:(id)arg0 ;
-(id)valueForEntityProperty:(id)arg0 ;
-(id)valuesForEntityProperties:(id)arg0 ;
-(void)_insertTallestValueForViewElement:(id)arg0 ;


@end


#endif