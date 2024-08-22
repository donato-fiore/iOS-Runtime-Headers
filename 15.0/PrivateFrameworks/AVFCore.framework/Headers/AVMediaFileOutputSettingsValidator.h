// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMEDIAFILEOUTPUTSETTINGSVALIDATOR_H
#define AVMEDIAFILEOUTPUTSETTINGSVALIDATOR_H

@protocol AVOutputSettingsValidation;

#import <Foundation/Foundation.h>

#import "AVMediaFileType.h"

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation>

 {
    AVMediaFileType *_fileType;
}


@property (readonly, nonatomic) AVMediaFileType *fileType;


+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg0 ;
+(void)initialize;
-(BOOL)validateAudioOutputSettings:(id)arg0 reason:(*id)arg1 ;
-(BOOL)validateVideoOutputSettings:(id)arg0 reason:(*id)arg1 ;
-(id)init;
-(id)initWithFileType:(id)arg0 ;
-(void)dealloc;


@end


#endif