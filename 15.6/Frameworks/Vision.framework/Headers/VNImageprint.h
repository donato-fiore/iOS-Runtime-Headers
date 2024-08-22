// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGEPRINT_H
#define VNIMAGEPRINT_H

@class NSString;
@protocol VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNSerializing, VNRequestSpecifying;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"
#import "VNMPImageDescriptor.h"

@interface VNImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNSerializing, VNRequestSpecifying>

 {
    VNRequestSpecifier *_originatingRequestSpecifier;
}


@property (retain, nonatomic) VNMPImageDescriptor *descriptor; // ivar: _descriptor
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, copy) NSString *requestClassName;
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly, nonatomic) NSUInteger serializedLength;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)requestClassAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)serializeStateIntoData:(id)arg0 startingAtByteOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)distanceToImageprint:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageDescriptor:(id)arg0 type:(NSUInteger)arg1 originatingRequestSpecifier:(id)arg2 ;
-(id)initWithState:(id)arg0 byteOffset:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithState:(id)arg0 error:(*id)arg1 ;
-(id)serializeStateAndReturnError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif