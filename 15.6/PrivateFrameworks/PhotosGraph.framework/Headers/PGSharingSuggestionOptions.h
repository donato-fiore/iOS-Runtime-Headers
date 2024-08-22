// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONOPTIONS_H
#define PGSHARINGSUGGESTIONOPTIONS_H


#import <Foundation/Foundation.h>


@interface PGSharingSuggestionOptions : NSObject

@property (nonatomic) BOOL debugMode; // ivar: _debugMode
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (nonatomic) BOOL filterLowWeightResults; // ivar: _filterLowWeightResults
@property (nonatomic) BOOL includeUnverified; // ivar: _includeUnverified
@property (nonatomic) BOOL replaceMergeCandidates; // ivar: _replaceMergeCandidates
@property (nonatomic) NSUInteger sharingStream; // ivar: _sharingStream
@property (nonatomic) BOOL useContactSuggestion; // ivar: _useContactSuggestion


+(NSUInteger)_shareSheetSharingStream;
+(id)optionsForClient:(NSUInteger)arg0 ;
-(id)description;
-(id)init;


@end


#endif