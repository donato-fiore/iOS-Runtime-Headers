// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIAZTECCODEDESCRIPTOR_H
#define CIAZTECCODEDESCRIPTOR_H

@class NSData;


#import "CIBarcodeDescriptor.h"

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSInteger dataCodewordCount; // ivar: dataCodewordCount
@property (readonly) NSData *errorCorrectedPayload; // ivar: errorCorrectedPayload
@property (readonly) BOOL isCompact; // ivar: isCompact
@property (readonly) NSInteger layerCount; // ivar: layerCount


+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg0 isCompact:(BOOL)arg1 layerCount:(NSInteger)arg2 dataCodewordCount:(NSInteger)arg3 ;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 isCompact:(BOOL)arg1 layerCount:(NSInteger)arg2 dataCodewordCount:(NSInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif