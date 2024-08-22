// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNATUREALIGNMENTTRACKER_H
#define SIGNATUREALIGNMENTTRACKER_H


#import <Foundation/Foundation.h>


@interface SignatureAlignmentTracker : NSObject



+(BOOL)ConvertException:(struct exception *)arg0 toError:(*id)arg1 ;
+(BOOL)ConvertSystemError:(struct system_error *)arg0 toError:(*id)arg1 ;
+(BOOL)FillUnknownError:(*id)arg0 ;
+(id)compareQuerySignature:(id)arg0 withReferenceSignature:(id)arg1 mergeMode:(NSInteger)arg2 error:(*id)arg3 ;
+(id)signatureAlignmentFromTrackingResult:(struct TrackingResult )arg0 ;


@end


#endif