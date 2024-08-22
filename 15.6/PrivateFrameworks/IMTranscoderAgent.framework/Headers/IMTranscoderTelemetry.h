// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODERTELEMETRY_H
#define IMTRANSCODERTELEMETRY_H


#import <Foundation/Foundation.h>


@interface IMTranscoderTelemetry : NSObject {
    unsigned char _signpostId;
}




-(NSInteger)_telemetryImageTypeForUTI:(id)arg0 ;
-(id)init;
-(void)_emitSignpostPreviewGenerationRange:(NSInteger)arg0 begin:(BOOL)arg1 ;
-(void)_emitSignpostTranscodeRange:(NSInteger)arg0 begin:(BOOL)arg1 ;
-(void)emitPreviewGenerationBeginFromUTI:(id)arg0 ;
-(void)emitPreviewGenerationEndFromUTI:(id)arg0 ;
-(void)emitSignpostNoTranscodeFromUTI:(id)arg0 ;
-(void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg0 ;
-(void)emitSignpostTranscodeSkipSourceUTI:(id)arg0 ;
-(void)emitSignpostTranscodeStepForDestinationUTI:(id)arg0 ;
-(void)emitTranscodeBeginFromUTI:(id)arg0 ;
-(void)emitTranscodeEndFromUTI:(id)arg0 ;


@end


#endif