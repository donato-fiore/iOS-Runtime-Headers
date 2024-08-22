// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTASRKEYWORDFINDERMESSAGE_H
#define FTASRKEYWORDFINDERMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTKeywordFinderRequest.h"
#import "FTKeywordFinderResponse.h"

@interface FTAsrKeywordFinderMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AsrKeywordFinderMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property (readonly, nonatomic) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrKeywordFinderMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrKeywordFinderMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::AsrKeywordFinderMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif