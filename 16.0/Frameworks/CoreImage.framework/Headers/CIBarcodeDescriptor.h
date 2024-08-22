// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBARCODEDESCRIPTOR_H
#define CIBARCODEDESCRIPTOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CIBarcodeDescriptor : NSObject <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif