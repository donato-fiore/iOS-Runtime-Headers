// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES18ACTIVITYEDGEINSETS_H
#define _TTC18ACTIVITYUISERVICES18ACTIVITYEDGEINSETS_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices18ActivityEdgeInsets : NSObject <NSCopying, NSSecureCoding, BSXPCSecureCoding>



@property (nonatomic) CGFloat bottom; // ivar: bottom
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic) CGFloat leading; // ivar: leading
@property (nonatomic) CGFloat top; // ivar: top
@property (nonatomic) CGFloat trailing; // ivar: trailing


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTop:(CGFloat)arg0 leading:(CGFloat)arg1 bottom:(CGFloat)arg2 trailing:(CGFloat)arg3 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif