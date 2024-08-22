// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKARGONDISKKEYDATABASE_H
#define NTKARGONDISKKEYDATABASE_H

@class NSArray, NSSet, NSString;
@protocol NTKArgonKeyDatabaseProviding;

#import <Foundation/Foundation.h>


@interface NTKArgonDiskKeyDatabase : NSObject <NTKArgonKeyDatabaseProviding>

 {
    NSArray *_searchPaths;
    NSSet *_knownKeyDescriptors;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSearchPathDomains:(NSUInteger)arg0 ;
-(id)keyDescriptorEnumerator;
-(id)keyDescriptorForFileName:(id)arg0 ;
-(void)_locked_rebuildCache;
-(void)clearCaches;


@end


#endif