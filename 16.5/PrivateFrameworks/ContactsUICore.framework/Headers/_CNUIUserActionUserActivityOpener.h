// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNUIUSERACTIONUSERACTIVITYOPENER_H
#define _CNUIUSERACTIONUSERACTIVITYOPENER_H

@class NSString;
@protocol CNUIUserActionUserActivityOpener;

#import <Foundation/Foundation.h>

#import "CNLSApplicationWorkspace.h"

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener>



@property (readonly, nonatomic) CNLSApplicationWorkspace *applicationWorkspace; // ivar: _applicationWorkspace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)errorForUnableToOpenUserActivity:(id)arg0 withUnderlyingError:(id)arg1 ;
-(id)init;
-(id)initWithApplicationWorkspace:(id)arg0 ;
-(id)openUserActivity:(id)arg0 usingBundleIdentifier:(id)arg1 withScheduler:(id)arg2 ;


@end


#endif