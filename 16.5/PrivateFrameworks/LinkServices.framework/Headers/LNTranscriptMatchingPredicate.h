// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNTRANSCRIPTMATCHINGPREDICATE_H
#define LNTRANSCRIPTMATCHINGPREDICATE_H

@class NSString, LNEntityIdentifier, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNTranscriptMatchingPredicate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) LNEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, copy, nonatomic) NSString *entityType; // ivar: _entityType
@property (readonly, copy, nonatomic) NSUUID *executionUUID; // ivar: _executionUUID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 type:(NSInteger)arg1 executionUUID:(id)arg2 entityIdentifier:(id)arg3 actionType:(id)arg4 entityType:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif