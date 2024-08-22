// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREPLACEDELTASREQUEST_H
#define CKREPLACEDELTASREQUEST_H

@class NSString, NSArray, CKMergeableValueID;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKReplaceDeltasRequest : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *deltaIdentifiersToReplace; // ivar: _deltaIdentifiersToReplace
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *replacementDeltas; // ivar: _replacementDeltas
@property (readonly, nonatomic) BOOL replacementDeltasContainNewData; // ivar: _replacementDeltasContainNewData
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CKMergeableValueID *valueID; // ivar: _valueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValueID:(id)arg0 deltaIdentifiersToReplace:(id)arg1 replacementDeltas:(id)arg2 replacementDeltasContainNewData:(BOOL)arg3 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif