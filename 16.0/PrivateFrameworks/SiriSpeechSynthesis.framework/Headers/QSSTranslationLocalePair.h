// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTRANSLATIONLOCALEPAIR_H
#define QSSTRANSLATIONLOCALEPAIR_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTranslationLocalePair : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslationLocalePair _root;
}


@property (readonly, nonatomic) NSString *source_locale;
@property (readonly, nonatomic) NSString *target_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationLocalePair *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslationLocalePair *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationLocalePair> )addObjectToBuffer:(*void)arg0 ;


@end


#endif