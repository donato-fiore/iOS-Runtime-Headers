// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHFEATUREFLAGS_H
#define SHFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface SHFeatureFlags : NSObject



+(id)defaultFlags;
-(id)initWithConfiguration:(id)arg0 ;
-(void)populateWithConfiguration:(id)arg0 ;


@end


#endif