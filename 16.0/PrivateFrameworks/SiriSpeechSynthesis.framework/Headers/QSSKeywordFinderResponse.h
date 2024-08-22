// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSKEYWORDFINDERRESPONSE_H
#define QSSKEYWORDFINDERRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSRecognitionSausage.h"

@interface QSSKeywordFinderResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *KeywordFinderResponse _root;
}


@property (readonly, nonatomic) QSSRecognitionSausage *corrected_sausage;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *n_best_list;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct KeywordFinderResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct KeywordFinderResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::KeywordFinderResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif