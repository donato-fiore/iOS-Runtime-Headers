// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYFETCHREQUEST_H
#define CNCHANGEHISTORYFETCHREQUEST_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding;


#import "CNFetchRequest.h"
#import "CNChangeHistoryAnchor.h"

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding>



@property (copy, nonatomic) NSArray *additionalContactKeyDescriptors; // ivar: _additionalContactKeyDescriptors
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic, getter=shouldEnforceClientIdentifer) BOOL enforceClientIdentifier; // ivar: _enforceClientIdentifier
@property (copy, nonatomic) NSArray *excludedTransactionAuthors; // ivar: _excludedTransactionAuthors
@property (nonatomic) BOOL includeChangeAnchors; // ivar: _includeChangeAnchors
@property (nonatomic) BOOL includeChangeIDs; // ivar: _includeChangeIDs
@property (nonatomic) BOOL includeExternalIDs; // ivar: _includeExternalIDs
@property (nonatomic) BOOL includeGroupChanges; // ivar: _includeGroupChanges
@property (nonatomic) BOOL includeImagesChanged; // ivar: _includeImagesChanged
@property (nonatomic) BOOL includeLabeledValueChanges; // ivar: _includeLabeledValueChanges
@property (nonatomic) BOOL includeLinkingChanges; // ivar: _includeLinkingChanges
@property (nonatomic) BOOL includeMeCardChanges; // ivar: _includeMeCardChanges
@property (nonatomic) BOOL mutableObjects; // ivar: _mutableObjects
@property (nonatomic) NSInteger resultType; // ivar: _resultType
@property (nonatomic) BOOL shouldUnifyResults; // ivar: _shouldUnifyResults
@property (readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
@property (copy, nonatomic) NSData *startingToken; // ivar: _startingToken
@property (nonatomic) BOOL unifyResults;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartingAnchor:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif