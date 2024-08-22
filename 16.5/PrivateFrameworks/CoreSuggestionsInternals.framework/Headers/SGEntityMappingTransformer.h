// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGENTITYMAPPINGTRANSFORMER_H
#define SGENTITYMAPPINGTRANSFORMER_H

@class NSDataDetector, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol>



@property (retain) NSDataDetector *dataDetector; // ivar: _dataDetector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *emailMapping; // ivar: _emailMapping
@property (readonly) NSUInteger hash;
@property (retain) NSString *linkMapping; // ivar: _linkMapping
@property (readonly) Class superclass;


+(id)withEmailMapping:(id)arg0 linkMapping:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntityMappingTransformer:(id)arg0 ;
-(id)initWithEmailMapping:(id)arg0 linkMapping:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif