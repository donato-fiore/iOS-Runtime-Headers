// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLRECORDTARGET_H
#define CPLRECORDTARGET_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLScopedIdentifier.h"

@interface CPLRecordTarget : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CPLScopedIdentifier *otherScopedIdentifier; // ivar: _otherScopedIdentifier
@property (readonly, nonatomic) CPLScopedIdentifier *resourceScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier; // ivar: _scopedIdentifier
@property (readonly, nonatomic) BOOL shouldUploadToOtherRecord;
@property (readonly, nonatomic) NSString *simpleDescription;
@property (readonly, nonatomic) NSArray *targetScopedIdentifiers;
@property (readonly, nonatomic) NSInteger targetState; // ivar: _targetState


+(BOOL)supportsSecureCoding;
+(id)descriptionForTargetState:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScopedIdentifier:(id)arg0 ;
-(id)initWithScopedIdentifier:(id)arg0 otherScopedIdentifier:(id)arg1 targetState:(NSInteger)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif