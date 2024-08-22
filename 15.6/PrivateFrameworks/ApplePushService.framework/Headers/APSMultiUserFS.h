// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSMULTIUSERFS_H
#define APSMULTIUSERFS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APSMultiUserFS : NSObject {
    NSString *_systemPathCache;
}


@property (readonly) BOOL isMultiUser; // ivar: _isMultiUser


+(id)sharedInstance;
-(id)initWithIsMultiUserMode:(BOOL)arg0 ;
-(id)systemPath;


@end


#endif