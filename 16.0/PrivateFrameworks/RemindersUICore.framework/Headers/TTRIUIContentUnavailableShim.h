// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTRIUICONTENTUNAVAILABLESHIM_H
#define TTRIUICONTENTUNAVAILABLESHIM_H

@protocol NSCopying, NSSecureCoding, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TTRIUIContentUnavailableShim : NSObject <NSCopying, NSSecureCoding>

 {
    id<NSCopying><NSSecureCoding> *_impl;
}




+(BOOL)supportsSecureCoding;
+(Class)implClass;
+(id)instanceWrappingImpl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif