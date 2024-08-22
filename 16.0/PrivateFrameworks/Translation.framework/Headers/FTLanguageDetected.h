// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTLANGUAGEDETECTED_H
#define FTLANGUAGEDETECTED_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTLanguageDetected : NSObject <FLTBFBufferAccessor, NSCopying>

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
-(id)predictions_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::LanguageDetected> )addObjectToBuffer:(*void)arg0 ;
-(void)predictions_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif