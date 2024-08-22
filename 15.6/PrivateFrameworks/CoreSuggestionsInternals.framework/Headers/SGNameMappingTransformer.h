// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGNAMEMAPPINGTRANSFORMER_H
#define SGNAMEMAPPINGTRANSFORMER_H

@class NSDictionary, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>

 {
    BOOL _forNameDetector;
    NSDictionary *_nameMappings;
    NSString *_tokenToIgnore;
    int _minimumConfidence;
    id *_confidenceMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)instanceForNameDetector;
+(id)withFullNameMapping:(id)arg0 firstNameMapping:(id)arg1 lastNameMapping:(id)arg2 andPossessive:(id)arg3 ;
// +(id)withFullNameMapping:(id)arg0 firstNameMapping:(id)arg1 lastNameMapping:(id)arg2 minimumConfidence:(int)arg3 confidenceMapper:(id)arg4 tokenToIgnore:(unk)arg5 andPossessive:(id)arg6  ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNameMappingTransformer:(id)arg0 ;
-(BOOL)isPossessive:(id)arg0 ;
// -(id)initWithNameMappings:(id)arg0 minimumConfidence:(int)arg1 confidenceMapper:(id)arg2 tokenToIgnore:(unk)arg3 forNameDetector:(id)arg4  ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)nameMappingForToken:(id)arg0 withConfidence:(*int)arg1 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif