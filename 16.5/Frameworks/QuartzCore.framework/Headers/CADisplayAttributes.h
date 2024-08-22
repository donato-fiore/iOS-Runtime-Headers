// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADISPLAYATTRIBUTES_H
#define CADISPLAYATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface CADisplayAttributes : NSObject {
    EDIDAttributes _edid_attributes;
}


@property (readonly) NSInteger bt2020YCC;
@property (readonly) NSInteger dolbyVision;
@property (readonly) NSInteger hdrStaticMetadataType1;
@property (readonly) BOOL legacyHDMIEDID;
@property (readonly) unsigned int manufacturerID;
@property (readonly) NSInteger pqEOTF;
@property (readonly) unsigned int productID;
@property (readonly) unsigned int serialNumber;
@property (readonly) unsigned int weekOfManufacture;
@property (readonly) unsigned int yearOfManufacture;


-(id)_initWithAttributes:(struct EDIDAttributes )arg0 ;


@end


#endif