// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSEARCHAPPENTITY_H
#define SPSEARCHAPPENTITY_H

@class NSString;


#import "SPSearchEntity.h"

@interface SPSearchAppEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
}


@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isAppEntitySearch;
-(BOOL)isScopedSearch;
-(id)initWithBundleIdentifier:(id)arg0 appName:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)queryString;
-(id)spotlightQueryString;
-(id)tokenText;
-(void)appendToQuery:(id)arg0 key:(id)arg1 value:(id)arg2 additions:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif