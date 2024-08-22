// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAGROUP_H
#define AAGROUP_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface AAGroup : NSObject {
    ? name;
    ? startDate;
    ? contentType;
    ? count;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *startDate;


-(id)init;


@end


#endif