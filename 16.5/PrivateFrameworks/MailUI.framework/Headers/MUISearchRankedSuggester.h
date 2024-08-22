// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHRANKEDSUGGESTER_H
#define MUISEARCHRANKEDSUGGESTER_H

@class NSString, NSArray;
@protocol EFLoggable, MUISearchSuggester;

#import <Foundation/Foundation.h>


@interface MUISearchRankedSuggester : NSObject <EFLoggable, MUISearchSuggester>

 {
    NSString *_bundleID;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly) Class superclass;


+(id)log;
+(id)suggesterWithBundleID:(id)arg0 ;
-(id)generateSuggestionsUsingPhraseManager:(id)arg0 handler:(id)arg1 ;
-(id)initWithBundleID:(id)arg0 ;


@end


#endif