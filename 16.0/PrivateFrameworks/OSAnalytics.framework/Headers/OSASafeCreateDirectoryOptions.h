// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSASAFECREATEDIRECTORYOPTIONS_H
#define OSASAFECREATEDIRECTORYOPTIONS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface OSASafeCreateDirectoryOptions : NSObject

@property BOOL createIntermediates; // ivar: _createIntermediates
@property BOOL fileProtectionNone; // ivar: _fileProtectionNone
@property (copy) NSNumber *groupID; // ivar: _groupID
@property (copy) NSNumber *userID; // ivar: _userID




@end


#endif