// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BUAPPGROUP_H
#define BUAPPGROUP_H

@class NSString, NSURL, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface BUAppGroup : NSObject {
    NSString *_identifier;
    NSURL *_containerURL;
    NSUserDefaults *_userDefaults;
}


@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;


+(id)books;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif