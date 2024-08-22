// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOAUTHORIZATIONHINTS_H
#define SOAUTHORIZATIONHINTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SOAuthorizationHints : NSObject

@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName; // ivar: _localizedExtensionBundleDisplayName


-(id)description;
-(id)initWithAuthorizationHintsCore:(id)arg0 ;


@end


#endif