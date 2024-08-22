// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONVISIBILITYSERVICE_H
#define SBICONVISIBILITYSERVICE_H

@class NSLock, NSSet;

#import <Foundation/Foundation.h>

#import "SBIconModel.h"

@interface SBIconVisibilityService : NSObject {
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}




-(id)iconStateDisplayIdentifiers;
-(id)initWithIconModel:(id)arg0 ;
-(void)_visibleIdentifiersChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif