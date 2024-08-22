// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNAMEDENTITYEXTRACTIONPLUGIN_H
#define PPNAMEDENTITYEXTRACTIONPLUGIN_H

@class NSString;
@protocol HVUserActivityConsumer;

#import <Foundation/Foundation.h>

#import "PPNamedEntityDissector.h"

@interface PPNamedEntityExtractionPlugin : NSObject <HVUserActivityConsumer>

 {
    PPNamedEntityDissector *_dissector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_processUserActivity:(id)arg0 extractionContainer:(id)arg1 rawTextOut:(*id)arg2 language:(id)arg3 ;
-(id)_entityContainersForContent:(id)arg0 contentDataSource:(id)arg1 isOutgoing:(BOOL)arg2 contactHandles:(id)arg3 uniqueIdentifier:(id)arg4 domainIdentifier:(id)arg5 bundleIdentifier:(id)arg6 ;
-(id)_entityContainersForUserAction:(id)arg0 searchableItem:(id)arg1 ;
-(id)_extractionCountForContainers:(id)arg0 ;
-(id)_extractionsFromEntityContainers:(id)arg0 ;
-(id)consumeSearchableUserActivityWithContext:(id)arg0 ;
-(id)consumeUserActivityMetadataWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)entityContainersForUserActivity:(id)arg0 ;
-(id)init;
-(id)initWithNamedEntityDissector:(id)arg0 ;
-(void)_processCSSearchableItemLocationWithName:(id)arg0 thoroughfare:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 postalCode:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 extractionContainer:(id)arg8 ;
-(void)_writeAndFlushContainers:(id)arg0 ;


@end


#endif