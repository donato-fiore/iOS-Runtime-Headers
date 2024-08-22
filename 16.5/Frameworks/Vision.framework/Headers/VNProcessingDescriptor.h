// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPROCESSINGDESCRIPTOR_H
#define VNPROCESSINGDESCRIPTOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNProcessingDescriptor : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)availableIdentifiers;
+(id)availableVersionsForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)descriptorForIdentifier:(id)arg0 version:(id)arg1 error:(*id)arg2 ;
+(id)descriptorsForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif