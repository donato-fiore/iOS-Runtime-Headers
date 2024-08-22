// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIALIBRARYSNAPSHOT_H
#define SHMEDIALIBRARYSNAPSHOT_H

@class NSArray, NSMutableOrderedSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *changes;
@property (retain, nonatomic) NSMutableOrderedSet *changeset; // ivar: _changeset


+(BOOL)supportsSecureCoding;
-(BOOL)containsLibraryItem:(id)arg0 ;
-(BOOL)evaluateUsingPredicate:(id)arg0 ;
-(BOOL)isConflictingChange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeSnapshot:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)updateItem:(id)arg0 ;


@end


#endif