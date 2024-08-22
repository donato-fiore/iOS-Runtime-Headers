// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)addDeviceSpecificTLVs2;
-(void)addHeySiriModelTLVs2;
-(void)addHostSpecificTLVs;
-(void)addHostSpecificTLVs2;
-(void)addLogsTLVs2;
-(void)addPersonalizationTLVs2;
-(void)addVoiceAssistTLVs2;


@end


#endif