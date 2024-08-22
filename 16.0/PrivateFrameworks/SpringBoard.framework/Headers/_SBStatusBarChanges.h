// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSTATUSBARCHANGES_H
#define _SBSTATUSBARCHANGES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SBStatusBarChanges : NSObject

@property (retain, nonatomic) NSString *statusBarPartIdentifier; // ivar: _statusBarPartIdentifier
@property (nonatomic) NSInteger statusBarPartStyle; // ivar: _statusBarPartStyle
@property (nonatomic) BOOL statusBarPartStyleChanged; // ivar: _statusBarPartStyleChanged
@property (nonatomic) NSInteger statusBarStyle; // ivar: _statusBarStyle
@property (nonatomic) BOOL statusBarStyleChanged; // ivar: _statusBarStyleChanged


-(void)invalidate;


@end


#endif