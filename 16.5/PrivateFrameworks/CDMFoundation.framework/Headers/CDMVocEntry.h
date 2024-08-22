// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMVOCENTRY_H
#define CDMVOCENTRY_H

@class NSString, NSArray, SIRINLUEXTERNALUsoGraph;

#import <Foundation/Foundation.h>


@interface CDMVocEntry : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSArray *metadata; // ivar: _metadata
@property (nonatomic) int nodeIndex; // ivar: _nodeIndex
@property (readonly, nonatomic) NSString *semantic; // ivar: _semantic
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph; // ivar: _usoGraph


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 label:(id)arg1 semantic:(id)arg2 ;
-(id)initWithText:(id)arg0 label:(id)arg1 semantic:(id)arg2 usoGraph:(id)arg3 nodeIndex:(int)arg4 ;


@end


#endif