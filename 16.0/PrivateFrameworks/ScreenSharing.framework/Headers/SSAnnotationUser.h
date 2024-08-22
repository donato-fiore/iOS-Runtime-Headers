// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSANNOTATIONUSER_H
#define SSANNOTATIONUSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSAnnotationUser : NSObject

@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSString *userID; // ivar: _userID


+(id)userWithDisplayName:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 ;


@end


#endif