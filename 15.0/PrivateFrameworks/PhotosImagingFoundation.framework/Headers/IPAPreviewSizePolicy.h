// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAPREVIEWSIZEPOLICY_H
#define IPAPREVIEWSIZEPOLICY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IPAImageSizePolicy.h"

@interface IPAPreviewSizePolicy : NSObject {
    id *_style;
    IPAImageSizePolicy *_sizePolicy;
    id *_styleNeededThreshold;
    id *_styleProducedThreshold;
}


@property (readonly) NSString *name; // ivar: _name
@property (retain) NSString *suffix; // ivar: _suffix


-(BOOL)styleCanBeProducedFromSize:(struct CGSize )arg0 ;
-(BOOL)styleIsNeededForFullSize:(struct CGSize )arg0 ;
-(id)description;
// -(id)initWithName:(id)arg0 style:(id)arg1 sizePolicy:(id)arg2 styleNeededThreshold:(id)arg3 styleProducedThreshold:(unk)arg4  ;
// -(id)initWithName:(id)arg0 suffix:(id)arg1 style:(id)arg2 sizePolicy:(id)arg3 styleNeededThreshold:(id)arg4 styleProducedThreshold:(unk)arg5  ;
-(id)sizeTransformationPolicy;
-(id)style;
-(id)styleShouldBeProducedFrom:(id)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(struct PFIntSize_st )integralTransformSize:(struct CGSize )arg0 ;


@end


#endif