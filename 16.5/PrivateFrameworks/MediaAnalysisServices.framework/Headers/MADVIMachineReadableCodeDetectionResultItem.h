// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIMACHINEREADABLECODEDETECTIONRESULTITEM_H
#define MADVIMACHINEREADABLECODEDETECTIONRESULTITEM_H

@class CIBarcodeDescriptor, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADVIMachineReadableCodeDetectionResultItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGPoint bottomLeft; // ivar: _bottomLeft
@property (readonly, nonatomic) CGPoint bottomRight; // ivar: _bottomRight
@property (readonly, nonatomic) CIBarcodeDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) CGRect normalizedBoundingBox;
@property (readonly, nonatomic) NSString *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *symbology; // ivar: _symbology
@property (readonly, nonatomic) CGPoint topLeft; // ivar: _topLeft
@property (readonly, nonatomic) CGPoint topRight; // ivar: _topRight


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopLeft:(struct CGPoint )arg0 topRight:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 symbology:(id)arg4 payload:(id)arg5 andDescriptor:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif