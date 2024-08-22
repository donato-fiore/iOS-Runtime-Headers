// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGENTITYMATCHINGTRANSFORMER_H
#define SGENTITYMATCHINGTRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol>



@property (retain) NSString *addressMapping; // ivar: _addressMapping
@property (retain) NSString *dateMapping; // ivar: _dateMapping
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *emailMapping; // ivar: _emailMapping
@property (readonly) NSUInteger hash;
@property (retain) NSString *phoneMapping; // ivar: _phoneMapping
@property (readonly) Class superclass;
@property (retain) NSString *targetMapping; // ivar: _targetMapping


+(id)withTargetMapping:(id)arg0 phoneMapping:(id)arg1 emailMapping:(id)arg2 addressMapping:(id)arg3 andDateMapping:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntityMatchingTransformer:(id)arg0 ;
-(id)extendMatchArray:(id)arg0 withTarget:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithTargetMapping:(id)arg0 phoneMapping:(id)arg1 emailMapping:(id)arg2 addressMapping:(id)arg3 andDateMapping:(id)arg4 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif