// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPDF417CODEDESCRIPTOR_H
#define CIPDF417CODEDESCRIPTOR_H

@class NSData;


#import "CIBarcodeDescriptor.h"

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSInteger columnCount; // ivar: columnCount
@property (readonly) NSData *errorCorrectedPayload; // ivar: errorCorrectedPayload
@property (readonly) BOOL isCompact; // ivar: isCompact
@property (readonly) NSInteger rowCount; // ivar: rowCount


+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg0 isCompact:(BOOL)arg1 rowCount:(NSInteger)arg2 columnCount:(NSInteger)arg3 ;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 isCompact:(BOOL)arg1 rowCount:(NSInteger)arg2 columnCount:(NSInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif