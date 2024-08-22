// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSRECOGNITIONPHRASETOKENSALTERNATIVES_H
#define QSSRECOGNITIONPHRASETOKENSALTERNATIVES_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSRecognitionPhraseTokensAlternatives : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionPhraseTokensAlternatives _root;
}


@property (readonly, nonatomic) BOOL has_unsuggested_alternatives;
@property (readonly, nonatomic) NSArray *tok_phrases;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionPhraseTokensAlternatives *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionPhraseTokensAlternatives *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives> )addObjectToBuffer:(*void)arg0 ;


@end


#endif