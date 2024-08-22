// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUPROXYRECENTCALL_H
#define TUPROXYRECENTCALL_H

@class CNContact, NSString, NSArray, CHRecentCall;
@protocol TUSearchResult;

#import <Foundation/Foundation.h>

#import "TUSearchController.h"

@interface TUProxyRecentCall : NSObject <TUSearchResult>



@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *callerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSString *mostRecentCallInfo;
@property (readonly) NSInteger mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (retain, nonatomic) CHRecentCall *recentCall; // ivar: _recentCall
@property (weak) TUSearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithRecentCall:(id)arg0 ;


@end


#endif