// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPERSONTILEDIMAGECOMBINERITEM_H
#define PXPERSONTILEDIMAGECOMBINERITEM_H

@class NSString;
@protocol PXFaceTileImageCombinerItem, PXPerson;

#import <Foundation/Foundation.h>


@interface PXPersonTiledImageCombinerItem : NSObject <PXFaceTileImageCombinerItem>

 {
    id<PXPerson> *_person;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPerson:(id)arg0 ;
-(void)px_requestImageWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 resultHandler:(id)arg3 ;


@end


#endif