// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEEXITCONTEXT_H
#define CTSTEWIEEXITCONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieExitContext : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif