// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFASSETADJUSTMENTS_H
#define PFASSETADJUSTMENTS_H

@class NSDate, NSData, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PFAssetAdjustments : NSObject <NSCopying>

 {
    NSDate *_adjustmentTimestamp;
}


@property (readonly, nonatomic) NSInteger adjustmentBaseVersion;
@property (readonly, nonatomic) NSData *adjustmentData;
@property (readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
@property (readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property (readonly, nonatomic) unsigned int adjustmentRenderTypes;
@property (nonatomic) NSDate *adjustmentTimestamp;
@property (readonly, copy, nonatomic) NSString *editorBundleID;
@property (retain, nonatomic) NSDictionary *propertyListDictionary; // ivar: _propertyListDictionary


+(BOOL)adjustmentsPropertyListFileRequiresOverflowDataReassemblyAtURL:(id)arg0 predictedSize:(*NSInteger)arg1 ;
+(BOOL)writeReassembleAdjustmentsPropertyListAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)dataForOverflowDataReassembledAdjustmentsPropertyListAtURL:(id)arg0 error:(*id)arg1 ;
+(id)fingerPrintForData:(id)arg0 error:(*id)arg1 ;
+(id)fingerPrintForFileDescriptor:(int)arg0 error:(*id)arg1 ;
+(id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 data:(id)arg2 baseVersion:(NSInteger)arg3 ;
-(id)initWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 data:(id)arg2 baseVersion:(NSInteger)arg3 editorBundleID:(id)arg4 ;
-(id)initWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 data:(id)arg2 baseVersion:(NSInteger)arg3 editorBundleID:(id)arg4 renderTypes:(unsigned int)arg5 ;
-(id)initWithPropertyListDictionary:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif