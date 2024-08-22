// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCLASSIFIABLEDRAWING_H
#define CHCLASSIFIABLEDRAWING_H

@class NSCharacterSet;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"

@interface CHClassifiableDrawing : NSObject

@property (readonly, nonatomic) NSCharacterSet *characterSet; // ivar: _characterSet
@property (readonly, nonatomic) CHDrawing *drawing; // ivar: _drawing
@property (readonly, nonatomic) BOOL expandCodePoints; // ivar: _expandCodePoints
@property (readonly, nonatomic) NSUInteger maxCandidateCount; // ivar: _maxCandidateCount
@property (readonly, nonatomic) CGRect normalizationContext; // ivar: _normalizationContext


-(id)initWithDrawing:(id)arg0 characterSet:(id)arg1 expandCodePoints:(BOOL)arg2 normalizationContext:(struct CGRect )arg3 maxCandidateCount:(NSUInteger)arg4 ;


@end


#endif