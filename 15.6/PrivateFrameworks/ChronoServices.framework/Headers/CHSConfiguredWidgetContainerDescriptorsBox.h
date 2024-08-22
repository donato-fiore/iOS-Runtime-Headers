// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSCONFIGUREDWIDGETCONTAINERDESCRIPTORSBOX_H
#define CHSCONFIGUREDWIDGETCONTAINERDESCRIPTORSBOX_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *descriptors; // ivar: _descriptors


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif