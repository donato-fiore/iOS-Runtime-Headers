// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTEMPLATEANDMORPH_H
#define SBTEMPLATEANDMORPH_H


#import <Foundation/Foundation.h>

#import "SBPolygon.h"
#import "SBTouchTemplate.h"

@interface SBTemplateAndMorph : NSObject

@property (readonly, nonatomic) SBPolygon *morphedCandidate; // ivar: _morphedCandidate
@property (readonly, nonatomic) SBTouchTemplate *touchTemplate; // ivar: _touchTemplate


-(id)initWithTemplate:(id)arg0 morph:(id)arg1 ;


@end


#endif