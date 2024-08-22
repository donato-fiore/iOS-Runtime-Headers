// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYELEMENT_H
#define ECMESSAGEBODYELEMENT_H

@class NSArray, NSString;
@protocol ECMessageBodyElement_Private;

#import <Foundation/Foundation.h>

#import "ECMessageBodyParser.h"

@interface ECMessageBodyElement : NSObject <ECMessageBodyElement_Private>

 {
    NSArray *_nodes;
    NSUInteger _quoteLevel;
    NSUInteger _externalRetainCount;
    NSUInteger _validAttributes;
    NSUInteger _attributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *nodes;
@property (weak, nonatomic) ECMessageBodyParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(BOOL)_hasValueForAttributes:(NSUInteger)arg0 ;
-(BOOL)isExternallyRetained;
-(NSUInteger)getQuoteLevel;
-(NSUInteger)quoteLevel;
-(NSUInteger)valueForAttributes:(NSUInteger)arg0 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)init;
-(id)retainExternally;
-(void)_setValue:(NSUInteger)arg0 forAttributes:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)releaseExternally;
-(void)reset;


@end


#endif