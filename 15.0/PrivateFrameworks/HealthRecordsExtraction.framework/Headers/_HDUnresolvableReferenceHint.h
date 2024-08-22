// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDUNRESOLVABLEREFERENCEHINT_H
#define _HDUNRESOLVABLEREFERENCEHINT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HDUnresolvableReferenceHint : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger hint; // ivar: _hint
@property (readonly, copy, nonatomic) NSString *reference; // ivar: _reference


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReference:(id)arg0 hint:(NSUInteger)arg1 ;


@end


#endif