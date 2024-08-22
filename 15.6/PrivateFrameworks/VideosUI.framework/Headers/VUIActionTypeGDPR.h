// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONTYPEGDPR_H
#define VUIACTIONTYPEGDPR_H

@class NSDictionary;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionTypeGDPR : VUIAction

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSDictionary *contextData; // ivar: _contextData


-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif