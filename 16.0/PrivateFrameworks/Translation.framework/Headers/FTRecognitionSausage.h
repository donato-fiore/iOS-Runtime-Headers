// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTRECOGNITIONSAUSAGE_H
#define FTRECOGNITIONSAUSAGE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTRecognitionSausage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionSausage _root;
}


@property (readonly, nonatomic) NSArray *positional_tok_phrase_alt;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionSausage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionSausage *)arg1 verify:(BOOL)arg2 ;
-(id)positional_tok_phrase_alt_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::RecognitionSausage> )addObjectToBuffer:(*void)arg0 ;
-(void)positional_tok_phrase_alt_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif