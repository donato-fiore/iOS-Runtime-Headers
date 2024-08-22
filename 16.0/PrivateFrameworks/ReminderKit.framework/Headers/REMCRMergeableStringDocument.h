// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMCRMERGEABLESTRINGDOCUMENT_H
#define REMCRMERGEABLESTRINGDOCUMENT_H

@class NSAttributedString, NSString;
@protocol REMTTHashtagHosting, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TTMergeableStringVersionedDocument.h"
#import "TTMergeableAttributedString.h"
#import "REMReplicaIDSource.h"

@interface REMCRMergeableStringDocument : NSObject <REMTTHashtagHosting, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document; // ivar: _document
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource; // ivar: _replicaIDSource
@property (readonly, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
+(id)documentFromSerializedData:(id)arg0 replicaIDSource:(id)arg1 forKey:(id)arg2 ofObjectID:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hashtagAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReplicaIDSource:(id)arg0 document:(id)arg1 ;
-(id)initWithReplicaIDSource:(id)arg0 serializedData:(id)arg1 error:(*id)arg2 ;
-(id)initWithReplicaIDSource:(id)arg0 string:(id)arg1 ;
-(id)mergedWithDocument:(id)arg0 error:(*id)arg1 ;
-(id)mutableDocument;
-(id)serializedData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHashtagInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif