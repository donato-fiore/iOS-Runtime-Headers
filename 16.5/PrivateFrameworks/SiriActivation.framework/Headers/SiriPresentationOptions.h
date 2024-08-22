// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIPRESENTATIONOPTIONS_H
#define SIRIPRESENTATIONOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hideOtherWindowsDuringAppearance; // ivar: _hideOtherWindowsDuringAppearance
@property (readonly, nonatomic) NSInteger requestSource; // ivar: _requestSource
@property (readonly, nonatomic) NSInteger rotationStyle; // ivar: _rotationStyle
@property (readonly, nonatomic) BOOL wakeScreen; // ivar: _wakeScreen


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWakeScreen:(BOOL)arg0 hideOtherWindowsDuringAppearance:(BOOL)arg1 rotationStyle:(NSInteger)arg2 requestSource:(NSInteger)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif