// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECFORMATTEDTEXT_H
#define WBSPARSECFORMATTEDTEXT_H

@class WBSParsecModel, NSNumber, NSString;


#import "WBSParsecImageRepresentation.h"

@interface WBSParsecFormattedText : WBSParsecModel

@property (readonly, nonatomic, getter=isEmphasized) BOOL emphasized; // ivar: _emphasized
@property (readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation; // ivar: _glyphRepresentation
@property (readonly, nonatomic) NSNumber *spaceAfterInPoints; // ivar: _spaceAfterInPoints
@property (readonly, nonatomic) NSNumber *spaceBeforeInPoints; // ivar: _spaceBeforeInPoints
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(id)schema;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)glyphWithSession:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif