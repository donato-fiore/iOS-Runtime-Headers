// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUADHOCRESULT_H
#define TUADHOCRESULT_H

@class CNContact, NSString, NSArray;
@protocol TUSearchResult;

#import <Foundation/Foundation.h>

#import "TUSearchController.h"

@interface TUAdhocResult : NSObject <TUSearchResult>



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
@property (readonly) NSInteger mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (weak) TUSearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)initWithString:(id)arg0 ;


@end


#endif