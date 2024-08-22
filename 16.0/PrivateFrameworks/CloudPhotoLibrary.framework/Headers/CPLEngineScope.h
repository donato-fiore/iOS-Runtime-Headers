// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINESCOPE_H
#define CPLENGINESCOPE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLEngineScope : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger cloudIndex; // ivar: _cloudIndex
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSInteger localIndex; // ivar: _localIndex
@property (readonly, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (readonly, nonatomic) NSInteger scopeType; // ivar: _scopeType
@property (nonatomic) NSInteger stableIndex; // ivar: _stableIndex


+(BOOL)supportsSecureCoding;
+(id)separatorForStatusKey:(id)arg0 ;
// +(void)formatStatusDictionary:(id)arg0 forScopeWithIdentifier:(id)arg1 appendString:(id)arg2 appendTopLevelStatus:(unk)arg3 appendLineStatus:(id)arg4  ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScopeIdentifier:(id)arg0 scopeType:(NSInteger)arg1 ;
-(id)redactedDescription;
-(id)statusDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif