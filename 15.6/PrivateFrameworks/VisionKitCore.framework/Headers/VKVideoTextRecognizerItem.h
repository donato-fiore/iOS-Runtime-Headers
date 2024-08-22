// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKVIDEOTEXTRECOGNIZERITEM_H
#define VKVIDEOTEXTRECOGNIZERITEM_H

@class NSMutableDictionary, NSArray, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKVideoTextRecognizerItem : NSObject {
    NSMutableDictionary *_strings;
}


@property (retain, nonatomic) VKQuad *boundingQuad; // ivar: _boundingQuad
@property (retain, nonatomic) VKQuad *originalBoundingQuad; // ivar: _originalBoundingQuad
@property (retain, nonatomic) NSArray *originalPoints; // ivar: _originalPoints
@property (retain, nonatomic) NSArray *points; // ivar: _points
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) ? warpTransform; // ivar: _warpTransform


-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)matrix3x3TransformToDictionaryRepresentation:(struct ? )arg0 ;
-(id)pointsToDictionaryRepresentation:(id)arg0 ;
-(void)didRecognizeString:(id)arg0 ;


@end


#endif