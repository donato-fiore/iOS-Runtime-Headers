// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGLOCATIONTITLECOMPONENT_H
#define PGLOCATIONTITLECOMPONENT_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "PGGraphEdge.h"
#import "PGGraphNode.h"

@interface PGLocationTitleComponent : NSObject

@property (retain, nonatomic) NSSet *addressNodes; // ivar: _addressNodes
@property (retain, nonatomic) PGGraphEdge *edge; // ivar: _edge
@property (retain, nonatomic) PGGraphNode *node; // ivar: _node
@property (nonatomic) NSString *personName; // ivar: _personName
@property (readonly, nonatomic) CGFloat timestampStart; // ivar: _timestampStart
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) float weight; // ivar: _weight


-(BOOL)canMergeWithTitleComponent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(void)addAddressNode:(id)arg0 ;
-(void)updateWithMomentNodes:(id)arg0 ;


@end


#endif