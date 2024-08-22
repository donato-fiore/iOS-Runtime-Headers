// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDMESSAGEATTACHMENT_H
#define INSENDMESSAGEATTACHMENT_H

@class NSString, PHAsset, NSURL;
@protocol INJSONSerializable, INEnumerable;

#import <Foundation/Foundation.h>

#import "INFile.h"

@interface INSendMessageAttachment : NSObject <INJSONSerializable, INEnumerable>



@property (readonly, copy, nonatomic) INFile *audioMessageFile; // ivar: _audioMessageFile
@property (readonly, nonatomic) BOOL currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INFile *file; // ivar: _file
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHAsset *phAsset;
@property (readonly, copy, nonatomic) NSString *phAssetId; // ivar: _phAssetId
@property (readonly, copy, nonatomic) NSURL *sharedLink; // ivar: _sharedLink
@property (readonly, copy, nonatomic) NSURL *speechDataURL; // ivar: _speechDataURL
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
+(id)attachmentWithAudioMessageFile:(id)arg0 ;
+(id)attachmentWithCurrentLocation;
+(id)attachmentWithFile:(id)arg0 ;
+(id)attachmentWithPHAsset:(id)arg0 ;
+(id)attachmentWithPHAssetId:(id)arg0 ;
+(id)attachmentWithSharedLink:(id)arg0 ;
+(id)attachmentWithSpeechDataURL:(id)arg0 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCurrentLocation:(BOOL)arg0 file:(id)arg1 speechDataURL:(id)arg2 audioMessageFile:(id)arg3 sharedLink:(id)arg4 phAssetId:(id)arg5 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif