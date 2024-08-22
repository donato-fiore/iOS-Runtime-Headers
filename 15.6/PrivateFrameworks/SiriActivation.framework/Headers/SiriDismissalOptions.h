// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIDISMISSALOPTIONS_H
#define SIRIDISMISSALOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) NSUInteger deactivationOptions; // ivar: _deactivationOptions
@property (readonly, nonatomic) NSUInteger dismissalReason; // ivar: _dismissalReason
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) BOOL shouldTurnScreenOff; // ivar: _shouldTurnScreenOff


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 animated:(BOOL)arg1 dismissalReason:(NSUInteger)arg2 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 animated:(BOOL)arg1 requestCancellationReason:(NSInteger)arg2 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 animated:(BOOL)arg1 requestCancellationReason:(NSInteger)arg2 dismissalReason:(NSUInteger)arg3 ;
-(id)initWithDeactivationOptions:(NSUInteger)arg0 animated:(BOOL)arg1 requestCancellationReason:(NSInteger)arg2 dismissalReason:(NSUInteger)arg3 shouldTurnScreenOff:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif