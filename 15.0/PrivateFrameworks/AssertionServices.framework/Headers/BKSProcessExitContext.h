// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSPROCESSEXITCONTEXT_H
#define BKSPROCESSEXITCONTEXT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSProcessExitContext : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _exitReason;
}


@property (readonly, nonatomic) NSUInteger exitReason;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif