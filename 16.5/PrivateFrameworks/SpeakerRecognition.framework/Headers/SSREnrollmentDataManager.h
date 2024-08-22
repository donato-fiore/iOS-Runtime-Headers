// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRENROLLMENTDATAMANAGER_H
#define SSRENROLLMENTDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface SSREnrollmentDataManager : NSObject



+(BOOL)saveMetadata:(id)arg0 isExplicitEnrollment:(BOOL)arg1 ;
+(BOOL)saveUtterance:(id)arg0 utteranceAudioPath:(id)arg1 numSamplesToWrite:(NSUInteger)arg2 isExplicitEnrollment:(BOOL)arg3 ;
+(BOOL)saveUtteranceAndMetadata:(id)arg0 atDirectory:(id)arg1 isExplicitEnrollment:(BOOL)arg2 ;
+(BOOL)writeMetaDict:(id)arg0 atMetaPath:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg0 ;
+(void)saveRawUtteranceAndMetadata:(id)arg0 to:(id)arg1 isExplicitEnrollment:(BOOL)arg2 ;


@end


#endif