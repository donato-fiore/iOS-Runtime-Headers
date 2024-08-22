// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFKEYSPECIFIER_H
#define _SFKEYSPECIFIER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFKeySpecifier : NSObject <NSCopying, NSSecureCoding>

 {
    id *_keySpecifierInternal;
}




+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif