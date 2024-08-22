// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADDRAWABLE_H
#define OADDRAWABLE_H

@class OADDrawable<OADDrawableContainer>;
@protocol OADClient;

#import <Foundation/Foundation.h>

#import "OADDrawableProperties.h"

@interface OADDrawable : NSObject {
    BOOL mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id<OADClient> *mClientData;
}


@property (weak) OADDrawable<OADDrawableContainer> *parent; // ivar: mParent


+(unsigned int)generateOADDrawableId:(id)arg0 ;
-(BOOL)hidden;
-(id)clientData;
-(id)createOrientedBoundsWithBounds:(struct CGRect )arg0 ;
-(id)createWordClientDataWithTextType:(int)arg0 ;
-(id)description;
-(id)drawableProperties;
-(id)ensureClientDataOfClass:(Class)arg0 ;
-(id)initWithPropertiesClass:(Class)arg0 ;
-(unsigned int)altId;
-(unsigned int)id;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAltId:(unsigned int)arg0 ;
-(void)setClientData:(id)arg0 ;
-(void)setDrawableProperties:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setId:(unsigned int)arg0 ;


@end


#endif