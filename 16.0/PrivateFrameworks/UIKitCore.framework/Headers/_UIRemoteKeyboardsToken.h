// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREMOTEKEYBOARDSTOKEN_H
#define _UIREMOTEKEYBOARDSTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIRemoteKeyboardsToken : NSObject {
    int _identifier;
}


@property (copy, nonatomic) NSString *sceneIdentityString; // ivar: sceneIdentityString


+(id)uniqueToken;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif