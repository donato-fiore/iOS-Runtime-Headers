// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACTIONPROMISE_H
#define VUIACTIONPROMISE_H

@class NSDictionary;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionPromise : VUIAction

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSDictionary *contextDataDictionary; // ivar: _contextDataDictionary


-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif