// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOPENURLCONTEXTUALACTION_H
#define WFOPENURLCONTEXTUALACTION_H

@class NSString, NSURL;


#import "WFContextualAction.h"

@interface WFOpenURLContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 bundleIdentifier:(id)arg1 actionTitle:(id)arg2 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif