// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UAPBIRFILEURLCONVERTER_H
#define UAPBIRFILEURLCONVERTER_H

@class NSString;
@protocol UAPBIRConverter;

#import <Foundation/Foundation.h>


@interface UAPBIRFileURLConverter : NSObject <UAPBIRConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerConverter;
-(id)convertIRDataToPlatform:(id)arg0 ;
-(id)convertPlatformDataToIR:(id)arg0 ;
-(id)typeString;


@end


#endif