// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMODELERRORUTILS_H
#define MLMODELERRORUTILS_H


#import <Foundation/Foundation.h>


@interface MLModelErrorUtils : NSObject



+(id)IOErrorWithFormat:(id)arg0 ;
+(id)customLayerErrorWithUnderlyingError:(id)arg0 withFormat:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 format:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 format:(id)arg1 args:(char *)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 format:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 format:(id)arg2 args:(char *)arg3 ;
+(id)errorWithIntegerCode:(NSInteger)arg0 underlyingError:(id)arg1 format:(id)arg2 args:(char *)arg3 ;
+(id)featureTypeErrorWithFormat:(id)arg0 ;
+(id)genericErrorWithFormat:(id)arg0 ;
+(id)modelDecryptionErrorWithUnderlyingError:(id)arg0 format:(id)arg1 ;
+(id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)arg0 format:(id)arg1 ;
+(id)modelEncryptionErrorWithUnderlyingError:(id)arg0 format:(id)arg1 ;
+(id)parameterErrorWithUnderlyingError:(id)arg0 format:(id)arg1 ;
+(id)privateErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 format:(id)arg2 args:(char *)arg3 ;
+(id)updateErrorWithFormat:(id)arg0 ;


@end


#endif