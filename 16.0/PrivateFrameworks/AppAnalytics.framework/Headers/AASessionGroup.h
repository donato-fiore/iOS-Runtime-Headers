// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AASESSIONGROUP_H
#define AASESSIONGROUP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AASessionGroup : NSObject {
    ? groupName;
}


@property (nonatomic, copy) NSString *groupName;


+(id)default;
-(id)init;
-(id)initWithGroupName:(id)arg0 ;


@end


#endif