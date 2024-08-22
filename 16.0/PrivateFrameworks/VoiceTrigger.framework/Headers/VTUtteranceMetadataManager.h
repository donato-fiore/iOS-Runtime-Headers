// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUTTERANCEMETADATAMANAGER_H
#define VTUTTERANCEMETADATAMANAGER_H


#import <Foundation/Foundation.h>


@interface VTUtteranceMetadataManager : NSObject



+(BOOL)_audioDirectoryNeedsUpgrade:(id)arg0 ;
+(BOOL)isUtteranceImplicitlyTrained:(id)arg0 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg0 ;
+(id)recordedTimeStampOfFile:(id)arg0 ;
+(void)_saveMetaVersionFileAtPath:(id)arg0 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg0 ;
+(void)_upgradeUtteranceMeta:(id)arg0 ;
+(void)_writeMetaDict:(id)arg0 forUtterancePath:(id)arg1 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg0 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg0 isExplicitEnrollment:(BOOL)arg1 isHandheldEnrollment:(BOOL)arg2 withBiometricResult:(NSUInteger)arg3 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg0 ;


@end


#endif