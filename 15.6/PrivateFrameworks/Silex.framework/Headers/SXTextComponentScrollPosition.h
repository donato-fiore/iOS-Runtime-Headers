// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTCOMPONENTSCROLLPOSITION_H
#define SXTEXTCOMPONENTSCROLLPOSITION_H



#import "SXComponentScrollPosition.h"

@interface SXTextComponentScrollPosition : SXComponentScrollPosition

@property (readonly, nonatomic) NSInteger characterIndex; // ivar: _characterIndex
@property (readonly, nonatomic) CGFloat relativeTextOffset; // ivar: _relativeTextOffset


+(BOOL)jsonDictionaryRepresentationIsValid:(id)arg0 exactly:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentIdentifier:(id)arg0 canvasWidth:(CGFloat)arg1 relativePageOffset:(CGFloat)arg2 characterIndex:(NSInteger)arg3 relativeTextOffset:(CGFloat)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 exactly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif