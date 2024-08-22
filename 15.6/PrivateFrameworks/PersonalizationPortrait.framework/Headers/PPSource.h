// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSOURCE_H
#define PPSOURCE_H

@class NSString, NSArray, NSDate, NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPSourceMetadata.h"

@interface PPSource : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSArray *contactHandles; // ivar: _contactHandles
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *documentId; // ivar: _documentId
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) PPSourceMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSDate *relevanceDate; // ivar: _relevanceDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSource:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 groupId:(id)arg1 documentId:(id)arg2 date:(id)arg3 ;
-(id)initWithBundleId:(id)arg0 groupId:(id)arg1 documentId:(id)arg2 date:(id)arg3 relevanceDate:(id)arg4 contactHandles:(id)arg5 language:(id)arg6 metadata:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sha256;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif