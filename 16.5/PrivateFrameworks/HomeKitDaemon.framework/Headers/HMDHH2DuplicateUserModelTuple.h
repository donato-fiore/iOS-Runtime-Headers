// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2DUPLICATEUSERMODELTUPLE_H
#define HMDHH2DUPLICATEUSERMODELTUPLE_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface HMDHH2DuplicateUserModelTuple : NSObject

@property (readonly, nonatomic) NSUUID *homeModelID; // ivar: _homeModelID
@property (readonly, nonatomic) NSString *userMergeID; // ivar: _userMergeID


-(id)description;
-(id)initWithHomeModelID:(id)arg0 userMergeID:(id)arg1 ;


@end


#endif