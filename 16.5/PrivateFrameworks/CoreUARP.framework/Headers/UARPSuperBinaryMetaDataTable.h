// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSUPERBINARYMETADATATABLE_H
#define UARPSUPERBINARYMETADATATABLE_H

@class NSURL, NSMutableArray, NSDictionary, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSURL *_plist;
    NSMutableArray *_values;
}


@property (readonly) NSDictionary *dict; // ivar: _dict
@property (readonly) NSNumber *formatVersion; // ivar: _formatVersion
@property (readonly) NSArray *values;


+(unsigned int)compressionAlgorithmFromString:(id)arg0 ;
-(BOOL)expandPlist:(*id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)createTLVWithType:(NSUInteger)arg0 keyValue:(id)arg1 payloadsURL:(id)arg2 isFilepath:(BOOL)arg3 ;
-(id)initAppleSpecificWithFormatVersion:(id)arg0 ;
-(id)initVendorAgnosticWithFormatVersion:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPlist:(id)arg0 ;
-(id)tlvArrayWithKey:(id)arg0 keyValue:(id)arg1 payloadsURL:(id)arg2 error:(*id)arg3 ;
-(id)tlvWithKey:(id)arg0 keyValue:(id)arg1 payloadsURL:(id)arg2 error:(*id)arg3 ;
-(void)addAnalyticsTLVs2;
-(void)addAppleSpecificTLVs;
-(void)addComposeTLVs2;
-(void)addDeviceSpecificTLVs2;
-(void)addHeySiriModelTLVs2;
-(void)addHostSpecificTLVs;
-(void)addHostSpecificTLVs2;
-(void)addLogsTLVs2;
-(void)addPersonalizationTLVs2;
-(void)addTLV:(NSUInteger)arg0 keyValue16:(id)arg1 tlvArray:(id)arg2 ;
-(void)addTLV:(NSUInteger)arg0 keyValue32:(id)arg1 tlvArray:(id)arg2 ;
-(void)addTLV:(NSUInteger)arg0 keyValue64:(id)arg1 tlvArray:(id)arg2 ;
-(void)addTLV:(NSUInteger)arg0 keyValue8:(id)arg1 tlvArray:(id)arg2 ;
-(void)addTLV:(NSUInteger)arg0 keyValue:(id)arg1 tlvArray:(id)arg2 payloadsURL:(id)arg3 isFilepath:(BOOL)arg4 ;
-(void)addTLV:(NSUInteger)arg0 legacyTLV:(NSUInteger)arg1 keyValue:(id)arg2 tlvArray:(id)arg3 payloadsURL:(id)arg4 isFilepath:(BOOL)arg5 ;
-(void)addTLV:(NSUInteger)arg0 versionString:(id)arg1 tlvArray:(id)arg2 ;
-(void)addTLVCompressPayloadAlgorithm:(id)arg0 tlvArray:(id)arg1 ;
-(void)addVoiceAssistTLVs2;
-(void)composeMatchingPayloads:(id)arg0 tlvArray:(id)arg1 ;
-(void)composeMeasuredPayloads:(id)arg0 tlvType:(NSUInteger)arg1 tlvArray:(id)arg2 ;


@end


#endif