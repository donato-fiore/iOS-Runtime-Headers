// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSDATABASECONTEXT_H
#define LSDATABASECONTEXT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface LSDatabaseContext : NSObject

@property (readonly, getter=isAccessing) BOOL accessing;
@property (readonly) BOOL canAccess;
@property (readonly) NSData *currentPersistentIdentifier;


+(id)new;
+(id)sharedDatabaseContext;
-(BOOL)startAccessingReturningError:(*id)arg0 ;
-(BOOL)startAccessingWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)startAccessingWithUserID:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)startAccessingWithUserID:(unsigned int)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)addDatabaseChangeObserver4WebKit:(id)arg0 ;
-(id)init;
-(void)accessUsingBlock:(id)arg0 ;
-(void)accessWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)accessWithUserID:(unsigned int)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)accessWithUserID:(unsigned int)arg0 usingBlock:(id)arg1 ;
-(void)observeDatabaseChange4WebKit:(id)arg0 ;
-(void)removeDatabaseChangeObserver4WebKit:(id)arg0 ;
-(void)stopAccessing;


@end


#endif