// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTEXTUALACTIONDISPLAYSLOT_H
#define WFCONTEXTUALACTIONDISPLAYSLOT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionDisplaySlot : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger parameterIndex; // ivar: _parameterIndex
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 parameterIndex:(NSUInteger)arg1 string:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif