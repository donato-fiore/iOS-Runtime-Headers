// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETREMOTECONNECTIONCONTEXT_H
#define SHSHEETREMOTECONNECTIONCONTEXT_H

@class NSArray, NSData, NSString;

#import <Foundation/Foundation.h>

#import "_UIActivityDiscoveryContext.h"

@interface SHSheetRemoteConnectionContext : NSObject

@property (copy, nonatomic) NSArray *assetIdentifiers; // ivar: _assetIdentifiers
@property (retain, nonatomic) _UIActivityDiscoveryContext *discoveryContext; // ivar: _discoveryContext
@property (nonatomic) BOOL instantShareSheet; // ivar: _instantShareSheet
@property (nonatomic) BOOL isSharePlayAvailable; // ivar: _isSharePlayAvailable
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds; // ivar: _peopleSuggestionBundleIds
@property (copy, nonatomic) NSData *processedImageResultsData; // ivar: _processedImageResultsData
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (nonatomic) BOOL supportsCollaboration; // ivar: _supportsCollaboration
@property (copy, nonatomic) NSArray *urlsBeingShared; // ivar: _urlsBeingShared


-(id)createContextDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 ;


@end


#endif