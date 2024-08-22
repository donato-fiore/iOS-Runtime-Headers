// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPROPERTYTRANSFORM_H
#define NSPROPERTYTRANSFORM_H

@class NSExpression, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSPropertyTransform.h"

@interface NSPropertyTransform : NSObject <NSSecureCoding>

 {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    BOOL _replaceMissingValueOnly;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyName:(id)arg0 valueExpression:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif