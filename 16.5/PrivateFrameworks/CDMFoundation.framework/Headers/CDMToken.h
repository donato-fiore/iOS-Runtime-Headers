// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMTOKEN_H
#define CDMTOKEN_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CDMToken : NSObject

@property (readonly, nonatomic) NSInteger begin; // ivar: _begin
@property (readonly, nonatomic) NSString *cleanValue; // ivar: _cleanValue
@property (readonly, nonatomic) NSArray *cleanValues;
@property (readonly, nonatomic) NSInteger end; // ivar: _end
@property (readonly, nonatomic, getter=getHasCleanValues) BOOL hasCleanValues;
@property (readonly, nonatomic) BOOL isSignificant; // ivar: _isSignificant
@property (readonly, nonatomic) BOOL isWhiteSpace; // ivar: _isWhiteSpace
@property (readonly, nonatomic) NSInteger nonWhitespaceTokenIndex; // ivar: _nonWhitespaceTokenIndex
@property (readonly, nonatomic) NSArray *normalizedValues; // ivar: _normalizedValues
@property (readonly, nonatomic) NSInteger tokenIndex; // ivar: _tokenIndex
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(BOOL)hasValue:(id)arg0 from:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithProtoToken:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 significant:(BOOL)arg3 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 significant:(BOOL)arg3 whitespace:(BOOL)arg4 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 significant:(BOOL)arg3 whitespace:(BOOL)arg4 cleanValue:(id)arg5 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 significant:(BOOL)arg3 whitespace:(BOOL)arg4 cleanValue:(id)arg5 tokenIndex:(NSInteger)arg6 nonWhitespaceTokenIndex:(NSInteger)arg7 ;
-(id)initWithValue:(id)arg0 begin:(NSInteger)arg1 end:(NSInteger)arg2 significant:(BOOL)arg3 whitespace:(BOOL)arg4 cleanValue:(id)arg5 tokenIndex:(NSInteger)arg6 nonWhitespaceTokenIndex:(NSInteger)arg7 normalizedValues:(id)arg8 ;
-(void)addNormalizedValue:(id)arg0 ;


@end


#endif