// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPICLOUDACCESSORY_H
#define UARPICLOUDACCESSORY_H

@class NSMutableArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CHIPAccessoryFirmwareRecord.h"
#import "UARPiCloudAccessoryRecord.h"

@interface UARPiCloudAccessory : NSObject <NSCopying>



@property (copy) NSMutableArray *availableRecords; // ivar: _availableRecords
@property (retain) CHIPAccessoryFirmwareRecord *chipFirmwareRecord; // ivar: _chipFirmwareRecord
@property (readonly) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSString *productGroup; // ivar: _productGroup
@property (readonly) NSString *productNumber; // ivar: _productNumber
@property (retain) UARPiCloudAccessoryRecord *record; // ivar: _record
@property BOOL signatureValidationNeeded; // ivar: _signatureValidationNeeded


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ;


@end


#endif