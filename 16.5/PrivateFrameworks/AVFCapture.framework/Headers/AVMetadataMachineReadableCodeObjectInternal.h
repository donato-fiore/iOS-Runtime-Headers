// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATAMACHINEREADABLECODEOBJECTINTERNAL_H
#define AVMETADATAMACHINEREADABLECODEOBJECTINTERNAL_H

@class NSDictionary, NSArray, CIBarcodeDescriptor, NSString;

#import <Foundation/Foundation.h>


@interface AVMetadataMachineReadableCodeObjectInternal : NSObject

@property (retain) NSDictionary *basicDescriptor; // ivar: basicDescriptor
@property (retain) NSArray *corners; // ivar: corners
@property BOOL decoded; // ivar: decoded
@property (retain) CIBarcodeDescriptor *descriptor; // ivar: descriptor
@property (retain) NSString *stringValue; // ivar: stringValue


-(void)dealloc;


@end


#endif