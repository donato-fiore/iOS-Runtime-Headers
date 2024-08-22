// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTAFMASTARFUZZYMATCHINGMESSAGE_H
#define FTAFMASTARFUZZYMATCHINGMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTAStarFuzzyMatchingRequest.h"
#import "FTAStarFuzzyMatchingResponse.h"

@interface FTAfmAStarFuzzyMatchingMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AfmAStarFuzzyMatchingMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTAStarFuzzyMatchingRequest *session_messageAsFTAStarFuzzyMatchingRequest;
@property (readonly, nonatomic) FTAStarFuzzyMatchingResponse *session_messageAsFTAStarFuzzyMatchingResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AfmAStarFuzzyMatchingMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AfmAStarFuzzyMatchingMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::AfmAStarFuzzyMatchingMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif