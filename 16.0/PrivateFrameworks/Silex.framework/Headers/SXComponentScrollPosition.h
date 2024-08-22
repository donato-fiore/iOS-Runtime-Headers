// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTSCROLLPOSITION_H
#define SXCOMPONENTSCROLLPOSITION_H

@class NSString;


#import "SXScrollPosition.h"

@interface SXComponentScrollPosition : SXScrollPosition

@property (readonly, nonatomic) CGFloat canvasWidth; // ivar: _canvasWidth
@property (readonly, copy, nonatomic) NSString *componentIdentifier; // ivar: _componentIdentifier
@property (readonly, nonatomic) CGFloat relativePageOffset; // ivar: _relativePageOffset


+(BOOL)jsonDictionaryRepresentationIsValid:(id)arg0 exactly:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentIdentifier:(id)arg0 canvasWidth:(CGFloat)arg1 relativePageOffset:(CGFloat)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 exactly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif