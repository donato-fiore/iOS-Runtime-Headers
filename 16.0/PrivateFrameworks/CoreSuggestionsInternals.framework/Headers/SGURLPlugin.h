// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGURLPLUGIN_H
#define SGURLPLUGIN_H

@class NSString;
@protocol FIAPPlugin, HVRemindersConsumer;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"
#import "SGURLDissector.h"

@interface SGURLPlugin : NSObject <FIAPPlugin, HVRemindersConsumer>

 {
    SGSqlEntityStore *_entityStore;
    SGURLDissector *_urlDissector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(BOOL)_shouldProcessSearchableItem:(id)arg0 ;
-(id)_consumeContentParts:(id)arg0 title:(id)arg1 fromHandle:(id)arg2 documentDate:(id)arg3 isOutgoingDocument:(BOOL)arg4 uniqueIdentifier:(id)arg5 domainIdentifier:(id)arg6 bundleIdentifier:(id)arg7 context:(id)arg8 ;
-(id)_urlContainerFromText:(id)arg0 documentDate:(id)arg1 documentTitle:(id)arg2 handle:(id)arg3 isOutgoingDocument:(BOOL)arg4 uniqueIdentifier:(id)arg5 domainIdentifier:(id)arg6 bundleIdentifier:(id)arg7 ;
-(id)consumeRemindersContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)extractURLsFromAttributesOfItem:(id)arg0 handle:(id)arg1 ;
-(id)extractURLsFromTextPropertiesOfItem:(id)arg0 handle:(id)arg1 ;
-(id)init;
-(id)initWithEntityStore:(id)arg0 ;
-(id)processSearchableItem:(id)arg0 ;
-(id)setup;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 ;


@end


#endif