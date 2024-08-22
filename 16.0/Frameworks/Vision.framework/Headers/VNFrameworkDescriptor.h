// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFRAMEWORKDESCRIPTOR_H
#define VNFRAMEWORKDESCRIPTOR_H

@class NSBundle;


#import "VNProcessingDescriptor.h"
#import "VNResourceVersion.h"

@interface VNFrameworkDescriptor : VNProcessingDescriptor

@property (readonly, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (readonly, nonatomic) VNResourceVersion *frameworkVersion;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrameworkBundleIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif