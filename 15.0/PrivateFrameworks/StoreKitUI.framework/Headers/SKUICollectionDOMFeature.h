// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOLLECTIONDOMFEATURE_H
#define SKUICOLLECTIONDOMFEATURE_H

@class IKAppContext, NSString;
@protocol SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature, SKUICollectionDOMFeatureTargetting;

#import <Foundation/Foundation.h>


@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature>



@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (weak, nonatomic) NSObject<SKUICollectionDOMFeatureTargetting> *collectionTarget; // ivar: _collectionTarget
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 options:(id)arg1 ;


@end


#endif