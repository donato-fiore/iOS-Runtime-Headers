// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUSERCONTEXT_H
#define INUSERCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INUserContextStore.h"

@interface INUserContext : NSObject <NSSecureCoding>

 {
    INUserContextStore *_store;
}




+(BOOL)supportsSecureCoding;
+(NSInteger)_type;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)_becomeCurrentNoHelper;
-(void)_setStore:(id)arg0 ;
-(void)becomeCurrent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif