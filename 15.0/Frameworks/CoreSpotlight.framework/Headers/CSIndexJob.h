// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSINDEXJOB_H
#define CSINDEXJOB_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CSSearchContext.h"

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSArray *excludedBundleIDs; // ivar: _excludedBundleIDs
@property (retain, nonatomic) NSString *extensionBundleID; // ivar: _extensionBundleID
@property (copy, nonatomic) NSArray *fileAttributeSets; // ivar: _fileAttributeSets
@property (retain, nonatomic) NSString *fileType; // ivar: _fileType
@property (retain, nonatomic) NSArray *identifiersToReindex; // ivar: _identifiersToReindex
@property (retain, nonatomic) NSData *importData; // ivar: _importData
@property (nonatomic) NSInteger jobOptions; // ivar: _jobOptions
@property (nonatomic) NSInteger jobType; // ivar: _jobType
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (retain, nonatomic) NSString *providerType; // ivar: _providerType
@property (retain, nonatomic) CSSearchContext *searchContext; // ivar: _searchContext


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJobType:(NSInteger)arg0 ;
-(id)initWithJobType:(NSInteger)arg0 jobOptions:(NSInteger)arg1 ;
-(id)initWithXPCDict:(id)arg0 ;
-(id)xpc_dictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif