// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCREADINGLISTENTRY_H
#define FCREADINGLISTENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FCReadingListEntry : NSObject {
    NSString *_identifier;
    NSString *_articleID;
    NSDate *_dateAdded;
    NSUInteger _origin;
}






@end


#endif