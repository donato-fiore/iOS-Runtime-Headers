// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKBASEMANAGER_H
#define SKBASEMANAGER_H


#import <Foundation/Foundation.h>


@interface SKBaseManager : NSObject

@property (readonly, nonatomic) BOOL supportsCocoa; // ivar: _supportsCocoa


+(id)defaultVisibleRoles;
+(id)sharedManager;
-(id)allDisks;
-(id)init;


@end


#endif