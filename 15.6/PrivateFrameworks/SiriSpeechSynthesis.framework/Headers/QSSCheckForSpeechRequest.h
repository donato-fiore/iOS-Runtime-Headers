// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSCHECKFORSPEECHREQUEST_H
#define QSSCHECKFORSPEECHREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSCheckForSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CheckForSpeechRequest _root;
}


@property (readonly, nonatomic) NSInteger end_speech_time;
@property (readonly, nonatomic) NSInteger start_speech_time;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CheckForSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CheckForSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CheckForSpeechRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif