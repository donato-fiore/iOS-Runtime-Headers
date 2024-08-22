// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFPARSEDHTMLNODE_H
#define _MFPARSEDHTMLNODE_H

@class NSMutableArray, NSString;
@protocol MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode;

#import <Foundation/Foundation.h>

#import "_MFParsedHTMLNode.h"

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode>

 {
    NSMutableArray *_childNodes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger endLocation; // ivar: _endLocation
@property (readonly, nonatomic) _MFParsedHTMLNode *firstChild;
@property (readonly, nonatomic) BOOL hasChildNodes;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *htmlString; // ivar: _htmlString
@property (readonly, nonatomic) _MFParsedHTMLNode *lastChild;
@property (weak, nonatomic) _MFParsedHTMLNode *nextSibling; // ivar: _nextSibling
@property (weak, nonatomic) _MFParsedHTMLNode *parentNode; // ivar: _parentNode
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