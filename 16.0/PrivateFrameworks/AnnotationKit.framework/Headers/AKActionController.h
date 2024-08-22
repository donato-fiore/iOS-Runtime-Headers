// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKACTIONCONTROLLER_H
#define AKACTIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "AKController.h"

@interface AKActionController : NSObject

@property (weak) AKController *controller; // ivar: _controller


-(BOOL)_isSenderEnabled:(id)arg0 segment:(NSInteger)arg1 ;
-(BOOL)isSenderEnabled:(id)arg0 ;
-(BOOL)validateSender:(id)arg0 ;
-(BOOL)validateSender:(id)arg0 segment:(NSInteger)arg1 ;
-(id)initWithController:(id)arg0 ;
-(void)performActionForSender:(id)arg0 ;
-(void)performActionForSender:(id)arg0 segment:(NSInteger)arg1 ;


@end


#endif