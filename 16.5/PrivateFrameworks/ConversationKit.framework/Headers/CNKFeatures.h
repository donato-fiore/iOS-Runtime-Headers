// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKFEATURES_H
#define CNKFEATURES_H


#import <Foundation/Foundation.h>


@interface CNKFeatures : NSObject {
    ? defaults;
}


@property (nonatomic, readonly) BOOL useBannersForIncomingCalls;


+(id)sharedInstance;
-(id)init;


@end


#endif