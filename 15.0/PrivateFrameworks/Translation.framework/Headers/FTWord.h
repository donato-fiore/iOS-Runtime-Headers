// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTWORD_H
#define FTWORD_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTWord : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *Word _root;
}


@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSData *pronunciations;
@property (readonly, nonatomic) NSString *tag;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Word *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct Word *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::Word> )addObjectToBuffer:(*void)arg0 ;
-(void)pronunciations:(id)arg0 ;


@end


#endif