// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDCALLKITACTION_H
#define DDCALLKITACTION_H

@class TUCallProvider;


#import "DDCallAction.h"

@interface DDCallKitAction : DDCallAction

@property (retain) TUCallProvider *callProvider; // ivar: _callProvider


+(BOOL)hostApplicationIsEntitled;
+(id)callKitProviders;
-(NSInteger)TTYType;
-(id)dialRequest;
-(id)localizedName;
-(id)subtitle;


@end


#endif