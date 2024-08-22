// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADIMAGEPROPERTIES_H
#define OADIMAGEPROPERTIES_H



#import "OADGraphicProperties.h"
#import "OADImageFill.h"

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}




+(id)defaultProperties;
-(BOOL)hasImageFill;
-(id)description;
-(id)imageFill;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)setImageFill:(id)arg0 ;


@end


#endif