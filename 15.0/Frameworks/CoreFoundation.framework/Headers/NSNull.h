// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSNULL_H
#define NSNULL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSNull : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)null;
-(NSUInteger)_cfTypeID;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif