// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETREMOTECONNECTIONCONTEXT_H
#define SHSHEETREMOTECONNECTIONCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "_UIActivityDiscoveryContext.h"

@interface SHSheetRemoteConnectionContext : NSObject

@property (copy, nonatomic) NSArray *assetIdentifiers; // ivar: _assetIdentifiers
@property (retain, nonatomic) _UIActivityDiscoveryContext *discoveryContext; // ivar: _discoveryContext
@property (nonatomic) BOOL isSharePlayAvailable; // ivar: _isSharePlayAvailable
@property (nonatomic) BOOL requestPartialSlotsRendering; // ivar: _requestPartialSlotsRendering
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (copy, nonatomic) NSArray *urlsBeingShared; // ivar: _urlsBeingShared


-(id)createContextDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 ;


@end


#endif