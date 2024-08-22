// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDKNOSISFACT_H
#define GDKNOSISFACT_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisFact : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *factId; // ivar: _factId
@property (readonly, copy, nonatomic) NSArray *objectAlias; // ivar: _objectAlias
@property (readonly, copy, nonatomic) NSString *objectID; // ivar: _objectID
@property (readonly, copy, nonatomic) NSNumber *objectPopularity; // ivar: _objectPopularity
@property (readonly, copy, nonatomic) NSArray *predicateAlias; // ivar: _predicateAlias
@property (readonly, copy, nonatomic) NSString *predicateId; // ivar: _predicateId
@property (readonly, copy, nonatomic) NSNumber *predicatePopularity; // ivar: _predicatePopularity
@property (readonly, copy, nonatomic) NSArray *qualifiers; // ivar: _qualifiers
@property (readonly, copy, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, copy, nonatomic) NSArray *subjectAlias; // ivar: _subjectAlias
@property (readonly, copy, nonatomic) NSString *subjectId; // ivar: _subjectId
@property (readonly, copy, nonatomic) NSArray *subjectIsa; // ivar: _subjectIsa
@property (readonly, copy, nonatomic) NSNumber *subjectPopularity; // ivar: _subjectPopularity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFactId:(id)arg0 score:(id)arg1 subjectId:(id)arg2 subjectAlias:(id)arg3 subjectPopularity:(id)arg4 subjectIsa:(id)arg5 predicateId:(id)arg6 predicateAlias:(id)arg7 predicatePopularity:(id)arg8 objectID:(id)arg9 objectAlias:(id)arg10 objectPopularity:(id)arg11 qualifiers:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif