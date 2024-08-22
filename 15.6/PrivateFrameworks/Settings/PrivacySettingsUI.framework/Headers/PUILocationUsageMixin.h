// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUILOCATIONUSAGEMIXIN_H
#define PUILOCATIONUSAGEMIXIN_H

@class NSString, UIImageView;

#import <Foundation/Foundation.h>


@interface PUILocationUsageMixin : NSObject

@property (nonatomic) NSUInteger authLevel; // ivar: _authLevel
@property (readonly, nonatomic) NSString *authLevelString; // ivar: _authLevelString
@property (nonatomic) int usage; // ivar: _usage
@property (readonly, nonatomic) UIImageView *usageIndicator; // ivar: _usageIndicator


-(id)_authLevelForMask:(NSUInteger)arg0 ;
-(id)iconForUsage:(int)arg0 ;
-(id)init;
-(struct CGSize )_authLevelLabelSize:(NSUInteger)arg0 ;


@end


#endif