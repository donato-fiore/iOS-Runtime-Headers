// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTCORRECTIONSVALIDATORRESPONSE_H
#define FTCORRECTIONSVALIDATORRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTCorrectionsValidatorResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *CorrectionsValidatorResponse _root;
}


@property (readonly, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)corrections_objectAtIndex:(NSUInteger)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsValidatorResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct CorrectionsValidatorResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::CorrectionsValidatorResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)corrections_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif