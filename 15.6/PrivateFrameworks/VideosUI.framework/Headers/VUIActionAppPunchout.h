// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONAPPPUNCHOUT_H
#define VUIACTIONAPPPUNCHOUT_H

@class NSURL;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionAppPunchout : VUIAction

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) BOOL isSensitiveURL; // ivar: _isSensitiveURL
@property (readonly, nonatomic) NSURL *punchoutURL; // ivar: _punchoutURL


-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)_openPunchoutURL:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif