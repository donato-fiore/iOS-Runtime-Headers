// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTORYBOARDSEGUE_H
#define UISTORYBOARDSEGUE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface UIStoryboardSegue : NSObject

@property (readonly, nonatomic) UIViewController *destinationViewController; // ivar: _destinationViewController
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *performHandler; // ivar: _performHandler
@property (copy, nonatomic) id *prepareHandler; // ivar: _prepareHandler
@property (retain, nonatomic) id *sender; // ivar: _sender
@property (readonly, nonatomic) UIViewController *sourceViewController; // ivar: _sourceViewController


+(id)segueWithIdentifier:(id)arg0 source:(id)arg1 destination:(id)arg2 performHandler:(id)arg3 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)_prepare;
-(void)perform;


@end


#endif