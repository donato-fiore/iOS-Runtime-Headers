// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTASRCORRECTIONSVALIDATORMESSAGE_H
#define FTASRCORRECTIONSVALIDATORMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTCorrectionsValidatorRequest.h"
#import "FTCorrectionsValidatorResponse.h"

@interface FTAsrCorrectionsValidatorMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AsrCorrectionsValidatorMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTCorrectionsValidatorRequest *session_messageAsFTCorrectionsValidatorRequest;
@property (readonly, nonatomic) FTCorrectionsValidatorResponse *session_messageAsFTCorrectionsValidatorResponse;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrCorrectionsValidatorMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AsrCorrectionsValidatorMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::AsrCorrectionsValidatorMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif