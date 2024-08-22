// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTRINGMAPPINGTRANSFORMER_H
#define SGSTRINGMAPPINGTRANSFORMER_H

@class NSString, NSDictionary;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *mappings; // ivar: _mappings
@property (readonly) Class superclass;


+(id)withMappings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStringMappingTransformer:(id)arg0 ;
-(id)initWithHelperMappingType:(id)arg0 andLanguage:(id)arg1 ;
-(id)initWithMappings:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(id)withHelperMappingType:(id)arg0 andLanguage:(id)arg1 ;


@end


#endif