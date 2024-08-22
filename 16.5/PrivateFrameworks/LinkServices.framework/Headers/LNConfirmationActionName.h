// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCONFIRMATIONACTIONNAME_H
#define LNCONFIRMATIONACTIONNAME_H

@class NSArray, LNStaticDeferredLocalizedString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNConfirmationActionName : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *acceptAlternatives; // ivar: _acceptAlternatives
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *acceptLabel; // ivar: _acceptLabel
@property (readonly, copy, nonatomic) NSArray *denyAlternatives; // ivar: _denyAlternatives
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *denyLabel; // ivar: _denyLabel
@property (readonly, nonatomic) BOOL destructive; // ivar: _destructive
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 destructive:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 destructive:(BOOL)arg1 acceptLabel:(id)arg2 acceptAlternatives:(id)arg3 denyLabel:(id)arg4 denyAlternatives:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif