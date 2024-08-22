// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSCORESUGGESTIONSCONTACTRESULTBUILDER_H
#define SSCORESUGGESTIONSCONTACTRESULTBUILDER_H

@class NSString;


#import "SSContactResultBuilder.h"

@interface SSCoreSuggestionsContactResultBuilder : SSContactResultBuilder

@property (retain, nonatomic) NSString *suggestedContactIdentifier; // ivar: _suggestedContactIdentifier


+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(BOOL)scopesSearchOnEngagement;
-(id)buildCommand;
-(id)initWithResult:(id)arg0 ;


@end


#endif