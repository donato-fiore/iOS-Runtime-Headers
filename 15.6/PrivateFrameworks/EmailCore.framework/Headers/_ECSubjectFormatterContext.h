// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ECSUBJECTFORMATTERCONTEXT_H
#define _ECSUBJECTFORMATTERCONTEXT_H

@class NSString, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface _ECSubjectFormatterContext : NSObject

@property (readonly, copy, nonatomic) NSString *localizedPrefix; // ivar: _localizedPrefix
@property (readonly, nonatomic) BOOL prefixLastStrongDirectionalityIsLeftToRight; // ivar: _prefixLastStrongDirectionalityIsLeftToRight
@property (readonly, nonatomic) NSRegularExpression *regex; // ivar: _regex


-(id)initWithRegex:(id)arg0 localizedPrefix:(id)arg1 ;


@end


#endif