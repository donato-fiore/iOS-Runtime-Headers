// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ECPARSEDHTMLNODE_H
#define _ECPARSEDHTMLNODE_H

@class NSMutableArray, NSString;
@protocol ECMessageBodyTreeNode, ECMessageBodyConsumableInnerTextNode;

#import <Foundation/Foundation.h>

#import "_ECParsedHTMLNode.h"

@interface _ECParsedHTMLNode : NSObject <ECMessageBodyTreeNode, ECMessageBodyConsumableInnerTextNode>

 {
    NSMutableArray *_childNodes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger endLocation; // ivar: _endLocation
@property (readonly, nonatomic) _ECParsedHTMLNode *firstChild;
@property (readonly, nonatomic) BOOL hasChildNodes;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *htmlString; // ivar: _htmlString
@property (readonly, nonatomic) _ECParsedHTMLNode *lastChild;
@property (weak, nonatomic) _ECParsedHTMLNode *nextSibling; // ivar: _nextSibling
@property (weak, nonatomic) _ECParsedHTMLNode *parentNode; // ivar: _parentNode
@property (nonatomic) NSUInteger startLocation; // ivar: _startLocation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *tagName;


-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)init;
-(id)recursiveDescription;
-(void)addRecursiveDescriptionWithLevel:(NSUInteger)arg0 toString:(id)arg1 ;
-(void)appendChild:(id)arg0 ;
-(void)collectDescendanceIntoArray:(id)arg0 ;
-(void)dealloc;


@end


#endif