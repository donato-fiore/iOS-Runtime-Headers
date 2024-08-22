// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSRESETSERVERENDPOINTER_H
#define QSSRESETSERVERENDPOINTER_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSResetServerEndpointer : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ResetServerEndpointer _root;
}


@property (readonly, nonatomic) NSInteger speech_packet_count;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ResetServerEndpointer *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ResetServerEndpointer *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ResetServerEndpointer> )addObjectToBuffer:(*void)arg0 ;


@end


#endif