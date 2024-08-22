// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSMOUSEPOINTERDEVICE_H
#define BKSMOUSEPOINTERDEVICE_H

@class NSString;
@protocol BSProtobufSerializable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventSenderDescriptor.h"

@interface BKSMousePointerDevice : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasVirtualMouseButtons; // ivar: _hasVirtualMouseButtons
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey
@property (copy, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor; // ivar: _senderDescriptor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDragLock; // ivar: _supportsDragLock


+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSenderDescriptor:(id)arg0 ;
-(id)preferences;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPreferences:(id)arg0 ;


@end


#endif