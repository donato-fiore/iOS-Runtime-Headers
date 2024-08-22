// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDETECTEDRESULT_H
#define VIDETECTEDRESULT_H


#import <Foundation/Foundation.h>

#import "VIOntologyNode.h"

@interface VIDetectedResult : NSObject

@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) VIOntologyNode *ontologyNode; // ivar: _ontologyNode
@property (readonly, nonatomic) NSInteger position; // ivar: _position
@property (readonly, nonatomic) float score; // ivar: _score


-(id)initWithOntologyNode:(id)arg0 position:(NSInteger)arg1 boundingBox:(struct CGRect )arg2 score:(float)arg3 ;


@end


#endif