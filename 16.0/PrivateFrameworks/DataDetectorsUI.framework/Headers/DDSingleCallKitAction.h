// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSINGLECALLKITACTION_H
#define DDSINGLECALLKITACTION_H

@class NSArray;


#import "DDCallKitAction.h"

@interface DDSingleCallKitAction : DDCallKitAction {
    NSArray *_callProviders;
}




+(BOOL)isAvailable;
-(?)initWithURL:(?)arg0 resultcontext;
-(id)callProvider;
-(id)localizedName;


@end


#endif