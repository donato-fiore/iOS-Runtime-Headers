// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSTARTPRONGUESSREQUEST_H
#define FTSTARTPRONGUESSREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTStartPronGuessRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartPronGuessRequest _root;
}


@property (readonly, nonatomic) NSInteger codec;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartPronGuessRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartPronGuessRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::StartPronGuessRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif