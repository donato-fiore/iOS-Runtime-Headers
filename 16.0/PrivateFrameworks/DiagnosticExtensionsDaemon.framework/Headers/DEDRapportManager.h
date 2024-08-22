// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDRAPPORTMANAGER_H
#define DEDRAPPORTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEDRapportManager : NSObject

@property (readonly) NSString *mediaRemoteIdentifier;
@property (readonly) NSString *mediaSystemIdentifier;
@property (readonly) NSString *mediaSystemName;
@property (readonly, nonatomic) NSInteger mediaSystemRole;


+(id)sharedInstance;
-(void)start;


@end


#endif