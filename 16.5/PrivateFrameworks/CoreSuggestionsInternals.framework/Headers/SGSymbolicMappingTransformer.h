// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSYMBOLICMAPPINGTRANSFORMER_H
#define SGSYMBOLICMAPPINGTRANSFORMER_H

@class NSString, NSCharacterSet;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol>



@property (retain) NSString *characterMapping; // ivar: _characterMapping
@property (retain) NSCharacterSet *characterSet; // ivar: _characterSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *numericMapping; // ivar: _numericMapping
@property (readonly) Class superclass;


+(id)withNumericMapping:(id)arg0 andSymbolicMapping:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSymbolicMappingTransformer:(id)arg0 ;
-(id)initWithNumericMapping:(id)arg0 andSymbolicMapping:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif