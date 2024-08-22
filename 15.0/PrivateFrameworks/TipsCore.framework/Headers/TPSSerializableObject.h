// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSERIALIZABLEOBJECT_H
#define TPSSERIALIZABLEOBJECT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TPSSerializableObject : NSObject <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif