// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDATAMATRIXCODEDESCRIPTOR_H
#define CIDATAMATRIXCODEDESCRIPTOR_H

@class NSData;


#import "CIBarcodeDescriptor.h"

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSInteger columnCount; // ivar: columnCount
@property (readonly) NSInteger eccVersion; // ivar: eccVersion
@property (readonly) NSData *errorCorrectedPayload; // ivar: errorCorrectedPayload
@property (readonly) NSInteger rowCount; // ivar: rowCount


+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg0 rowCount:(NSInteger)arg1 columnCount:(NSInteger)arg2 eccVersion:(NSInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 rowCount:(NSInteger)arg1 columnCount:(NSInteger)arg2 eccVersion:(NSInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif