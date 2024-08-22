// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTASRGRAPHEMETOPHONEMEMESSAGE_H
#define FTASRGRAPHEMETOPHONEMEMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTGraphemeToPhonemeRequest.h"
#import "FTGraphemeToPhonemeResponse.h"

@interface FTAsrGraphemeToPhonemeMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AsrGraphemeToPhonemeMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTGraphemeToPhonemeRequest *session_messageAsFTGraphemeToPhonemeRequest;
@property (readonly, nonatomic) FTGraphemeToPhonemeResponse *session_messageAsFTGraphemeToPhonemeResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrGraphemeToPhonemeMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrGraphemeToPhonemeMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::AsrGraphemeToPhonemeMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif