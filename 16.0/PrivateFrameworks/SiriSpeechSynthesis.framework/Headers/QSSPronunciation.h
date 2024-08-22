// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSPRONUNCIATION_H
#define QSSPRONUNCIATION_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSPronunciation : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Pronunciation _root;
}


@property (readonly, nonatomic) NSString *phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Pronunciation *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Pronunciation *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::Pronunciation> )addObjectToBuffer:(*void)arg0 ;


@end


#endif