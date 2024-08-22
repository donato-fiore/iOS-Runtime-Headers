// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPSEARCHCOMMANDENTITY_H
#define SPSEARCHCOMMANDENTITY_H

@class NSString, SFPerformEntityQueryCommand;


#import "SPSearchEntity.h"

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isCommandEntitySearch;
-(BOOL)isScopedSearch;
-(BOOL)isServerEntitySearch;
-(id)command;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 fromSuggestion:(BOOL)arg1 ;
-(id)searchString;
-(id)spotlightQueryString;
-(id)symbolName;
-(id)tokenText;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif