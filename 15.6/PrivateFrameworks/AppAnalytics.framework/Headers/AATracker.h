// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AATRACKER_H
#define AATRACKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AATracker : NSObject {
    ? name;
    ? identifier;
    ? tracker;
    ? eventMirrorStore;
}


@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;


-(id)init;


@end


#endif