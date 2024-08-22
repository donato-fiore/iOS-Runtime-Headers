// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORNICKNAME_H
#define BLASTDOORNICKNAME_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorAvatarImage.h"

@interface BlastDoorNickname : NSObject {
    ? nickname;
}


@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;


-(id)init;


@end


#endif