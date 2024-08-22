// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRVIRTUALVOICEINPUTDEVICEDESCRIPTOR_H
#define MRVIRTUALVOICEINPUTDEVICEDESCRIPTOR_H

@class NSData, NSDictionary, NSArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>

#import "_MRVoiceInputDeviceDescriptorProtobuf.h"

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *defaultFormat; // ivar: _defaultFormat
@property (readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;
@property (readonly, nonatomic) NSArray *supportedFormats; // ivar: _supportedFormats


-(id)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif