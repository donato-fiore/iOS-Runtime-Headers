// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIRESPONDER_OVERRIDE_HOST_H
#define _UIRESPONDER_OVERRIDE_HOST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface _UIResponder_Override_Host : NSObject {
    NSMutableArray *_overrides;
}


@property (readonly, weak, nonatomic) UIResponder *owner; // ivar: _owner


+(id)hostForResponder:(id)arg0 ;
-(NSInteger)typesForResponder:(id)arg0 ;
-(id)description;
-(id)init;
-(void)attachOverrider:(id)arg0 forTypes:(NSInteger)arg1 ;
-(void)dealloc;
-(void)detachOverrider:(id)arg0 forTypes:(NSInteger)arg1 ;


@end


#endif