// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMFORMATTINGMANAGER_H
#define CAMFORMATTINGMANAGER_H


#import <Foundation/Foundation.h>


@interface CAMFormattingManager : NSObject

@property (readonly, nonatomic) BOOL supportsVerticalText; // ivar: _supportsVerticalText
@property (readonly, nonatomic) BOOL wantsCustomKerning; // ivar: _wantsCustomKerning


+(id)sharedManager;
-(id)init;
-(void)_commonCAMFormattingManagerInitialization;


@end


#endif