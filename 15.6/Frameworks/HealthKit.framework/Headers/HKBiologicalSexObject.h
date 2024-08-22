// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBIOLOGICALSEXOBJECT_H
#define HKBIOLOGICALSEXOBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKBiologicalSexObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger biologicalSex; // ivar: _biologicalSex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithBiologicalSex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif