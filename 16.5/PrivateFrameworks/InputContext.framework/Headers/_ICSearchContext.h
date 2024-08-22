// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICSEARCHCONTEXT_H
#define _ICSEARCHCONTEXT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _ICSearchContext : NSObject

@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) BOOL isResponseContextDenylisted; // ivar: _isResponseContextDenylisted
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) BOOL shouldDisableAutoCaps; // ivar: _shouldDisableAutoCaps


-(id)initWithLocale:(id)arg0 recipients:(id)arg1 applicationBundleIdentifier:(id)arg2 isResponseContextDenylisted:(BOOL)arg3 shouldDisableAutoCaps:(BOOL)arg4 ;


@end


#endif