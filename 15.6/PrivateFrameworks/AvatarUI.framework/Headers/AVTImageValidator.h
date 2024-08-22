// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTIMAGEVALIDATOR_H
#define AVTIMAGEVALIDATOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTImageValidatorConfiguration.h"

@interface AVTImageValidator : NSObject

@property (retain, nonatomic) AVTImageValidatorConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *duplicateValidationQueue; // ivar: _duplicateValidationQueue
@property (retain, nonatomic) NSMutableDictionary *fileNameToImageHashesMap; // ivar: _fileNameToImageHashesMap
@property (retain, nonatomic) NSMutableDictionary *imageHashesToAvatarDataHashesMap; // ivar: _imageHashesToAvatarDataHashesMap
@property (retain, nonatomic) NSMutableDictionary *imageHashesToFileNameMap; // ivar: _imageHashesToFileNameMap
@property (retain, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger


+(BOOL)isImageValid:(id)arg0 error:(*id)arg1 ;
+(id)sharedValidator;
+(struct ? )_calculateStatistics:(struct CGImage *)arg0 withSize:(struct CGSize )arg1 ;
-(BOOL)validateImageDataIsNotDuplicate:(id)arg0 forFileName:(id)arg1 avatarDataHash:(id)arg2 ;
-(BOOL)validateImageIsNotTransparent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 environment:(id)arg1 ;
-(void)nts_addHash:(id)arg0 forKey:(id)arg1 avatarDataHash:(id)arg2 ;


@end


#endif