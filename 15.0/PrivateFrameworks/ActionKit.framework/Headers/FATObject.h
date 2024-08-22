// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FATOBJECT_H
#define FATOBJECT_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FATObject : NSObject <NSCoding, NSCopying>





+(id)structFields;
+(id)structName;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)read:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif