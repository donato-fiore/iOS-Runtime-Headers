// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTERRORMESSAGE_H
#define FTERRORMESSAGE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTErrorMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ErrorMessage _root;
}


@property (readonly, nonatomic) unsigned int error_code;
@property (readonly, nonatomic) NSString *reason;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::ErrorMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif