// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTKEYWORDFINDERREQUEST_H
#define FTKEYWORDFINDERREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTRecognitionResult.h"

@interface FTKeywordFinderRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *KeywordFinderRequest _root;
}


@property (readonly, nonatomic) BOOL enable_sanitization;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) FTRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct KeywordFinderRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct KeywordFinderRequest *)arg1 verify:(BOOL)arg2 ;
-(id)keywords_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::KeywordFinderRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)keywords_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif