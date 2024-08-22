// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACUNKNOWNACTIVITYPOLICY_H
#define DACUNKNOWNACTIVITYPOLICY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DACUnknownActivityPolicy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (readonly, copy, nonatomic) NSString *audioSessionMode; // ivar: _audioSessionMode
@property (readonly, nonatomic) NSUInteger audioSessionOptions; // ivar: _audioSessionOptions
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(id)audioPolicyWithOptions:(NSUInteger)arg0 audioSessionCategory:(id)arg1 audioSessionMode:(id)arg2 audioSessionOptions:(NSUInteger)arg3 ;
+(id)policyWithOptions:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUnknownActivityPolicy:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithOptions:(NSUInteger)arg0 audioSessionCategory:(id)arg1 audioSessionMode:(id)arg2 audioSessionOptions:(NSUInteger)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif