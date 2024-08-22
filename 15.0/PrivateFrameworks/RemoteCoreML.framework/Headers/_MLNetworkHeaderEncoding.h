// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLNETWORKHEADERENCODING_H
#define _MLNETWORKHEADERENCODING_H


#import <Foundation/Foundation.h>


@interface _MLNetworkHeaderEncoding : NSObject



+(*void)getHeaderDataStart:(id)arg0 ;
+(*void)getHeaderEnd:(id)arg0 ;
+(BOOL)isHeaderAcknowledgeFailData:(NSUInteger)arg0 ;
+(BOOL)isHeaderAcknowledgeSucessData:(NSUInteger)arg0 ;
+(BOOL)isHeaderCustom:(NSUInteger)arg0 ;
+(BOOL)isHeaderError:(NSUInteger)arg0 ;
+(BOOL)isHeaderIncomingData:(NSUInteger)arg0 ;
+(BOOL)isHeaderLoad:(NSUInteger)arg0 ;
+(BOOL)isHeaderPredictFeature:(NSUInteger)arg0 ;
+(BOOL)isHeaderText:(NSUInteger)arg0 ;
+(BOOL)isHeaderUnLoad:(NSUInteger)arg0 ;
+(NSUInteger)getHeaderDataSize:(id)arg0 ;
+(NSUInteger)getHeaderEncoding:(id)arg0 ;
+(NSUInteger)getHeaderSize;
+(id)acknowledgeFailData;
+(id)acknowledgeSucessData;
+(id)constructDataPacket:(id)arg0 HeaderEncoding:(NSUInteger)arg1 ;
+(id)custom:(id)arg0 ;
+(id)loadModel:(id)arg0 ;
+(id)predictFeature:(id)arg0 ;
+(id)textDebug:(id)arg0 ;
+(id)unLoadModel:(id)arg0 ;


@end


#endif