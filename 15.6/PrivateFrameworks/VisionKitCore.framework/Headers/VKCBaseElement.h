// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCBASEELEMENT_H
#define VKCBASEELEMENT_H

@class NSArray, CROutputRegion, CRDocumentOutputRegion, NSString;

#import <Foundation/Foundation.h>

#import "VKCBaseElement.h"
#import "VKQuad.h"

@interface VKCBaseElement : NSObject

@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) int confidence;
@property (retain, nonatomic) CROutputRegion *crOutputRegion; // ivar: _crOutputRegion
@property (readonly, nonatomic) NSInteger elementType;
@property (readonly, nonatomic) BOOL hasChildren;
@property (readonly, nonatomic) CGRect imageSpaceBoundingBox;
@property (readonly, nonatomic) NSUInteger numberOfChildren;
@property (weak, nonatomic) VKCBaseElement *parent; // ivar: _parent
@property (retain, nonatomic) CRDocumentOutputRegion *parentCRDocument; // ivar: _parentCRDocument
@property (retain, nonatomic) VKQuad *quad; // ivar: _quad
@property (readonly, nonatomic) NSString *stringValue;


-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isInspectableCellSelectable;
-(NSInteger)type;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)recursiveSearchForCROutputRegion:(id)arg0 ;
-(void)loadInfoFromCROutputRegion:(id)arg0 ;


@end


#endif