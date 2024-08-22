// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSMOTIONTRACKINGSTATE_H
#define AXSSMOTIONTRACKINGSTATE_H

@class NSString, NSError, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *debugString;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSSet *expressions; // ivar: _expressions
@property (readonly, nonatomic) BOOL hasFace;
@property (nonatomic) CGPoint lookAtPoint; // ivar: _lookAtPoint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif