// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLIBRARYDIFFERENCE_H
#define SHLIBRARYDIFFERENCE_H

@class NSArray, NSMutableSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHLibraryDifference : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *changes;
@property (retain, nonatomic) NSMutableSet *changeset; // ivar: _changeset


+(BOOL)supportsSecureCoding;
+(id)empty;
-(BOOL)isConflictingChange:(id)arg0 ;
-(id)changeForIndexPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)filteredChangesForPredicate:(id)arg0 ;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeDifference:(id)arg0 ;
-(void)remove:(id)arg0 ;
-(void)update:(id)arg0 ;


@end


#endif