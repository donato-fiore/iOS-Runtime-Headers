// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTCONNECTION_H
#define MCMCLIENTCONNECTION_H

@protocol MCMContext;

#import <Foundation/Foundation.h>


@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) NSObject<MCMContext> *context; // ivar: _context


+(id)privilegedClientConnectionWithUserIdentity:(id)arg0 ;
+(id)privilegedClientConnectionWithUserIdentity:(id)arg0 kernel:(BOOL)arg1 ;
+(id)sharedClientConnection;
-(BOOL)_containerURL:(id)arg0 isValidForContainerClass:(NSUInteger)arg1 ;
-(id)clientBundleIdentifier;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_cleanupOprhanedCodeSigningMappingData;
-(void)_cleanupOrphanedDataForDirectories:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(void)_regenerateAllSystemContainerPaths;
-(void)containerManagerCleanupWithCompletion:(id)arg0 ;
-(void)containerManagerSetup;
-(void)rebootContainerManagerCleanupWithCompletion:(id)arg0 ;
-(void)rebootContainerManagerSetup;


@end


#endif