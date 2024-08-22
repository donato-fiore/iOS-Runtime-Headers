// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUILIKENESSFINGERPRINTGROUPIMPL_H
#define _CNUILIKENESSFINGERPRINTGROUPIMPL_H

@class NSArray, NSString;
@protocol _CNUILikenessFingerprintImpl;

#import <Foundation/Foundation.h>

#import "CNUILikenessRenderingScope.h"

@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl>



@property (readonly, copy) NSArray *badges; // ivar: _badges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *impls; // ivar: _impls
@property (readonly, copy) CNUILikenessRenderingScope *scope; // ivar: _scope
@property (readonly) Class superclass;


-(BOOL)hasContactIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImpls:(id)arg0 scope:(id)arg1 badges:(id)arg2 ;


@end


#endif