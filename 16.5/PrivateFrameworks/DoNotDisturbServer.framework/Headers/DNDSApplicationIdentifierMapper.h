// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSAPPLICATIONIDENTIFIERMAPPER_H
#define DNDSAPPLICATIONIDENTIFIERMAPPER_H

@class NSString;
@protocol DNDSApplicationIdentifierMapping;

#import <Foundation/Foundation.h>


@interface DNDSApplicationIdentifierMapper : NSObject <DNDSApplicationIdentifierMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_iOSBundleIDForMacOSBundleID:(id)arg0 ;
-(id)_macOSBundleIDForiOSBundleID:(id)arg0 ;
-(id)applicationIdentifierForFileWithSourceApplicationIdentifier:(id)arg0 ;
-(id)applicationIdentifierForSyncWithSourceApplicationIdentifier:(id)arg0 ;
-(id)applicationIdentifierForTargetPlatform:(NSUInteger)arg0 withSourceApplicationIdentifier:(id)arg1 ;


@end


#endif