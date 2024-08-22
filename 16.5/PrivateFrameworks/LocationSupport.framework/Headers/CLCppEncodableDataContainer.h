// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLCPPENCODABLEDATACONTAINER_H
#define CLCPPENCODABLEDATACONTAINER_H

@class NSData;


#import "CLCppContainer.h"

@interface CLCppEncodableDataContainer : CLCppContainer

@property (copy, nonatomic) id *compatibilityInfo; // ivar: _compatibilityInfo
@property (copy, nonatomic) id *encoder; // ivar: _encoder
@property (copy, nonatomic) NSData *serialized; // ivar: _serialized


+(BOOL)supportsSecureCoding;
// +(id)containerWithObject:(*void)arg0 cppDataEncoder:(id)arg1 destructor:(unk)arg2 binaryVersion:(id)arg3 typeSize:(unk)arg4  ;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithObject:(*void)arg0 cppDataEncoder:(id)arg1 destructor:(unk)arg2 binaryVersion:(id)arg3 typeSize:(unk)arg4  ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif