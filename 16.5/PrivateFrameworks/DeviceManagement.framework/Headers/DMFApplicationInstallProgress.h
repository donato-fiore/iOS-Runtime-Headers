// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFAPPLICATIONINSTALLPROGRESS_H
#define DMFAPPLICATIONINSTALLPROGRESS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat fractionCompleted; // ivar: _fractionCompleted
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 phase:(NSUInteger)arg1 fractionCompleted:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif