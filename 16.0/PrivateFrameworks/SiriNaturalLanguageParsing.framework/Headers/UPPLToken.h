// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPPLTOKEN_H
#define UPPLTOKEN_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UPPLToken : NSObject

@property (readonly, nonatomic) _NSRange charIndicesRange; // ivar: _charIndicesRange
@property (readonly, nonatomic) NSArray *encodedLabels; // ivar: _encodedLabels
@property (readonly, nonatomic) NSArray *graphemeClusters; // ivar: _graphemeClusters
@property (readonly, nonatomic) BOOL isOverflow; // ivar: _isOverflow
@property (readonly, nonatomic) BOOL isSpecialToken; // ivar: _isSpecialToken
@property (readonly, nonatomic) BOOL isWordPiece; // ivar: _isWordPiece
@property (readonly, nonatomic) NSString *token; // ivar: _token
@property (readonly, nonatomic) NSUInteger tokenId; // ivar: _tokenId


-(id)dictionaryRepresentation;
-(id)initWithToken:(id)arg0 tokenId:(NSUInteger)arg1 charIndicesRange:(struct _NSRange )arg2 graphemeClusters:(id)arg3 ;
-(id)initWithToken:(id)arg0 tokenId:(NSUInteger)arg1 charIndicesRange:(struct _NSRange )arg2 graphemeClusters:(id)arg3 isSpecialToken:(BOOL)arg4 isWordPiece:(BOOL)arg5 isOverflow:(BOOL)arg6 encodedLabels:(id)arg7 ;


@end


#endif