// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMERGECONFLICT_H
#define NSMERGECONFLICT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSManagedObject.h"

@interface NSMergeConflict : NSObject <NSSecureCoding>



@property (readonly, retain) NSDictionary *cachedSnapshot; // ivar: _snapshot2
@property (readonly) NSUInteger newVersionNumber; // ivar: _newVersion
@property (readonly, retain) NSDictionary *objectSnapshot; // ivar: _snapshot1
@property (readonly) NSUInteger oldVersionNumber; // ivar: _oldVersion
@property (readonly, retain) NSDictionary *persistedSnapshot; // ivar: _snapshot3
@property (readonly, retain) NSManagedObject *sourceObject; // ivar: _source


+(BOOL)supportsSecureCoding;
-(id)ancestorSnapshot;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 newVersion:(NSUInteger)arg1 oldVersion:(NSUInteger)arg2 cachedSnapshot:(id)arg3 persistedSnapshot:(id)arg4 ;
-(id)initWithSource:(id)arg0 newVersion:(NSUInteger)arg1 oldVersion:(NSUInteger)arg2 snapshot1:(id)arg3 snapshot2:(id)arg4 snapshot3:(id)arg5 ;
-(id)objectForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_doCleanupForXPCStore:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif