// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSPLACEHOLDERFILESECURITY_H
#define __NSPLACEHOLDERFILESECURITY_H

@protocol NSCopying, NSCoding;


#import "NSFileSecurity.h"

@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>





+(BOOL)supportsSecureCoding;
+(id)immutablePlaceholder;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileSec:(struct _filesec *)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif