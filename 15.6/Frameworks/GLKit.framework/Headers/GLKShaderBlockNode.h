// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKSHADERBLOCKNODE_H
#define GLKSHADERBLOCKNODE_H

@class NSMutableString, NSString;
@protocol NSXMLParserDelegate, NSCopying;

#import <Foundation/Foundation.h>

#import "GLKShaderBlockNode.h"

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying>



@property (retain, nonatomic) NSMutableString *blockText; // ivar: _blockText
@property (nonatomic) GLKShaderBlockNode *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) BOOL indexedMask; // ivar: _indexedMask
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *loopVar; // ivar: _loopVar
@property (nonatomic) GLKBigInt_s mask; // ivar: _mask
@property (nonatomic) GLKShaderBlockNode *next; // ivar: _next
@property (nonatomic) GLKShaderBlockNode *parent; // ivar: _parent
@property (nonatomic) int propertyClass; // ivar: _propertyClass
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) int unrollCt; // ivar: _unrollCt


+(id)copyTreeWithRoot:(id)arg0 parent:(id)arg1 ;
+(id)copyTreeWithRootButNotSiblings:(id)arg0 parent:(id)arg1 ;
+(struct GLKBigInt_s )maskForLabel:(id)arg0 root:(id)arg1 index:(int)arg2 ;
+(unsigned int)nodeCt:(id)arg0 nodeCt:(*unsigned int)arg1 ;
+(void)buildUnrollNodeArray:(id)arg0 array:(id)arg1 ;
+(void)insertNode:(id)arg0 afterSibling:(id)arg1 ;
+(void)printTree:(id)arg0 ;
+(void)printTreeVerbose:(id)arg0 ;
+(void)setIndicesForRoot:(id)arg0 andReplaceLoopVar:(id)arg1 baseLabel:(id)arg2 basePropertyClass:(int)arg3 usingIndex:(unsigned int)arg4 indexString:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif