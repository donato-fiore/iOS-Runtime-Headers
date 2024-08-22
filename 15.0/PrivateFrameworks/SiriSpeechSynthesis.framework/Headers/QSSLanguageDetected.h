// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSLANGUAGEDETECTED_H
#define QSSLANGUAGEDETECTED_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSLanguageDetected : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LanguageDetected _root;
}


@property (readonly, nonatomic) NSString *detected_locale;
@property (readonly, nonatomic) NSArray *predictions;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetected *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetected *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::LanguageDetected> )addObjectToBuffer:(*void)arg0 ;


@end


#endif