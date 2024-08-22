// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMEDIAFILETYPE_H
#define AVMEDIAFILETYPE_H

@class NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVDispatchOnce.h"

@interface AVMediaFileType : NSObject <NSCopying>

 {
    NSString *_uti;
    AVDispatchOnce *_supportsSampleReferencesOnce;
    BOOL _supportsSampleReferences;
}


@property (readonly, nonatomic) NSString *UTI;
@property (readonly, nonatomic) unsigned int audioFileTypeID;
@property (readonly, nonatomic) NSString *defaultFileExtension;
@property (readonly, nonatomic) NSString *figFormatReaderFileFormat;
@property (readonly, nonatomic) NSSet *supportedMediaTypes;
@property (readonly, nonatomic) BOOL supportsSampleReferences;


+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)allFileTypeIdentifiers;
+(id)isoFileTypes;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg0 ;
+(struct __CFString *)figFileTypeProfileFromAVFileTypeProfile:(id)arg0 ;
+(void)initialize;
-(BOOL)supportsFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)supportsOutputSettings:(id)arg0 reason:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFileTypeIdentifier:(id)arg0 exceptionReason:(*id)arg1 ;
-(void)dealloc;


@end


#endif