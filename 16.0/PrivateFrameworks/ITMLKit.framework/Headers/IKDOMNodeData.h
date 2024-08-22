// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMNODEDATA_H
#define IKDOMNODEDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IKDOMNode.h"

@interface IKDOMNodeData : NSObject

@property (nonatomic, getter=isAutoHighlightRead) BOOL autoHighlightRead; // ivar: _autoHighlightRead
@property (nonatomic, getter=isBindingParsed) BOOL bindingParsed; // ivar: _bindingParsed
@property (nonatomic, getter=isChildrenUpdated) BOOL childrenUpdated; // ivar: _childrenUpdated
@property (readonly, nonatomic) BOOL containsUpdates;
@property (nonatomic, getter=isDataResolved) BOOL dataResolved; // ivar: _dataResolved
@property (retain, nonatomic) NSMutableDictionary *featuresMap; // ivar: _featuresMap
@property (weak, nonatomic) IKDOMNode *ownerJSNode; // ivar: _ownerJSNode
@property (nonatomic, getter=arePrototypesResolved) BOOL prototypesResolved; // ivar: _prototypesResolved
@property (nonatomic, getter=areRulesParsed) BOOL rulesParsed; // ivar: _rulesParsed
@property (nonatomic, getter=isSubtreeUpdated) BOOL subtreeUpdated; // ivar: _subtreeUpdated
@property (nonatomic, getter=isUpdated) BOOL updated; // ivar: _updated


+(id)jsNodeDataForNode:(id)arg0 ;
-(id)featureForName:(id)arg0 ;
-(void)setFeature:(id)arg0 forName:(id)arg1 ;


@end


#endif