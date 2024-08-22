// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTCORRECTIONSALIGNMENT_H
#define FTCORRECTIONSALIGNMENT_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTCorrectionsAlignment : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CorrectionsAlignment _root;
}


@property (readonly, nonatomic) NSString *corrected_words;
@property (readonly, nonatomic) NSString *original_words;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsAlignment *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsAlignment *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CorrectionsAlignment> )addObjectToBuffer:(*void)arg0 ;


@end


#endif