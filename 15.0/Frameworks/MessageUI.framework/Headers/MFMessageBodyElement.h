// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGEBODYELEMENT_H
#define MFMESSAGEBODYELEMENT_H

@class NSArray, NSString;
@protocol MFMessageBodyElement_Private;

#import <Foundation/Foundation.h>

#import "MFMessageBodyParser.h"

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private>

 {
    NSArray *_nodes;
    NSUInteger _quoteLevel;
    NSUInteger _externalRetainCount;
    int _validAttributes;
    int _attributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *nodes;
@property (weak, nonatomic) MFMessageBodyParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(BOOL)_hasValueForAttributes:(int)arg0 ;
-(BOOL)isExternallyRetained;
-(NSUInteger)getQuoteLevel;
-(NSUInteger)quoteLevel;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)init;
-(id)retainExternally;
-(int)valueForAttributes:(int)arg0 ;
-(void)_setValue:(int)arg0 forAttributes:(int)arg1 ;
-(void)dealloc;
-(void)releaseExternally;
-(void)reset;


@end


#endif