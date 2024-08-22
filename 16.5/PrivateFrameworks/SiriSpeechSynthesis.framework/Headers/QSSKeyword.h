// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSKEYWORD_H
#define QSSKEYWORD_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSKeyword : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Keyword _root;
}


@property (readonly, nonatomic) NSString *keyword_orthography;
@property (readonly, nonatomic) CGFloat posterior;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Keyword *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Keyword *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::Keyword> )addObjectToBuffer:(*void)arg0 ;


@end


#endif