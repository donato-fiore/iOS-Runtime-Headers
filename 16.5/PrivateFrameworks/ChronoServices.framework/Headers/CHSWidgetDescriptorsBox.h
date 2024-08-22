// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETDESCRIPTORSBOX_H
#define CHSWIDGETDESCRIPTORSBOX_H

@class NSSet, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSWidgetDescriptorsBox : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier; // ivar: _descriptorsByExtensionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 ;
-(void)_performValidation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif