// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSAVOCADODESCRIPTORSBOX_H
#define CHSAVOCADODESCRIPTORSBOX_H

@class NSSet, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSAvocadoDescriptorsBox : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier; // ivar: _descriptorsByExtensionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 ;
-(void)_performValidation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif