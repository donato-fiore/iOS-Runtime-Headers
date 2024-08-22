// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHBATTERIESELEMENT_H
#define SBHBATTERIESELEMENT_H



#import "SBHCustomIconElement.h"

@interface SBHBatteriesElement : SBHCustomIconElement



+(id)elementIdentifier;
-(BOOL)iconAllowsLaunch:(id)arg0 ;
-(BOOL)iconSupportsRasterization:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)displayName;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif