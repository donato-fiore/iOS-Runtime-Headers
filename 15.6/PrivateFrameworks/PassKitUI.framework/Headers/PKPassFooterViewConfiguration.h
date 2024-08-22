// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSFOOTERVIEWCONFIGURATION_H
#define PKPASSFOOTERVIEWCONFIGURATION_H

@class PKPass;

#import <Foundation/Foundation.h>

#import "PKPassView.h"

@interface PKPassFooterViewConfiguration : NSObject

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) PKPassView *passView; // ivar: _passView
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithPassView:(id)arg0 state:(NSInteger)arg1 ;


@end


#endif