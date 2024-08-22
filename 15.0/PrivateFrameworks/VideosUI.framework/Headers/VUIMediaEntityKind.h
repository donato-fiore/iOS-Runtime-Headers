// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIAENTITYKIND_H
#define VUIMEDIAENTITYKIND_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityKind : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *mediaEntityClassName; // ivar: _mediaEntityClassName
@property (copy, nonatomic) NSArray *propertyDescriptors; // ivar: _propertyDescriptors
@property (copy, nonatomic) NSDictionary *propertyDescriptorsByName; // ivar: _propertyDescriptorsByName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMediaEntityClassName:(id)arg0 ;
-(id)propertyDescriptorForName:(id)arg0 ;
-(id)sortingPropertyDescriptorForName:(id)arg0 ;


@end


#endif