// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPARENTALCONTROLSSERVICE_H
#define IMPARENTALCONTROLSSERVICE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface IMParentalControlsService : NSObject

@property (retain) NSSet *allowlist; // ivar: _allowlist
@property BOOL disableService; // ivar: _disableService
@property BOOL forceAllowlist; // ivar: _forceAllowlist
@property (retain) NSString *name; // ivar: _name


-(void)dealloc;


@end


#endif