// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCNULLPLAYBACKCONTEXT_H
#define _MPCNULLPLAYBACKCONTEXT_H

@class MPPlaybackContext, NSString;



@interface _MPCNullPlaybackContext : MPPlaybackContext

@property (copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionComponents;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif