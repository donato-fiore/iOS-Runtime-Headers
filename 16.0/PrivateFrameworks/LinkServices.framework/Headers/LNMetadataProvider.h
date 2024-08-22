// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNMETADATAPROVIDER_H
#define LNMETADATAPROVIDER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface LNMetadataProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(NSInteger)metadataVersionForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)actionForBundleIdentifier:(id)arg0 andActionIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)actionsConformingToSystemProtocol:(id)arg0 withParametersOfTypes:(id)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)actionsConformingToSystemProtocols:(id)arg0 logicalType:(NSUInteger)arg1 bundleIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)actionsForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)actionsWithError:(*id)arg0 ;
-(id)actionsWithFullyQualifiedIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)bundlesWithError:(*id)arg0 ;
-(id)entitiesForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)entitiesWithError:(*id)arg0 ;
-(id)enumsForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)enumsWithError:(*id)arg0 ;
-(id)init;
-(id)queriesForBundleIdentifier:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(id)queriesWithError:(*id)arg0 ;
-(void)dealloc;
-(void)registerBundleWithIdentifier:(id)arg0 force:(BOOL)arg1 reply:(id)arg2 ;
-(void)resetWithReply:(id)arg0 ;
-(void)scanBundlesWithReply:(id)arg0 ;
-(void)unregisterBundleWithIdentifier:(id)arg0 reply:(id)arg1 ;


@end


#endif