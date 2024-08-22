// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSEARCHCONTEXT_H
#define CKVSEARCHCONTEXT_H

@class NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVSearchContext : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_context;
}




+(BOOL)supportsSecureCoding;
+(id)_supportedContextClasses;
-(BOOL)setContext:(id)arg0 withType:(unsigned short)arg1 ;
-(id)contextForType:(unsigned short)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif