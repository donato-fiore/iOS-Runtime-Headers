// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSERIALIZABLEOBJECT_H
#define EKSERIALIZABLEOBJECT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EKSerializableObject : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)classesForKey;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif