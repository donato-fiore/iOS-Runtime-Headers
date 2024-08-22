// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTEVENTAGENTHELPER_H
#define RTEVENTAGENTHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RTEventAgentHelper : NSObject

@property (retain, nonatomic) NSString *restorationIdentifier; // ivar: _restorationIdentifier


+(BOOL)launchdManaged;
+(id)signingIdentifierFromSelf;
-(id)initWithRestorationIdentifier:(id)arg0 ;


@end


#endif