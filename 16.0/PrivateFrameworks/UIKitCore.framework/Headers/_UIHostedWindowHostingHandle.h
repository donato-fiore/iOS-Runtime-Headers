// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHOSTEDWINDOWHOSTINGHANDLE_H
#define _UIHOSTEDWINDOWHOSTINGHANDLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) CGRect rootLayerFrame; // ivar: _rootLayerFrame
@property (readonly, nonatomic) CGAffineTransform rootLayerTransform; // ivar: _rootLayerTransform


+(BOOL)supportsSecureCoding;
+(id)hostedWindowHostingHandleWithContextID:(unsigned int)arg0 rootLayerTransform:(struct CGAffineTransform )arg1 rootLayerFrame:(struct CGRect )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif