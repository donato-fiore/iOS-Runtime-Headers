// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROXYFACTORY_H
#define PKPROXYFACTORY_H

@class NSString;
@protocol PKProxyFactory;

#import <Foundation/Foundation.h>


@interface PKProxyFactory : NSObject <PKProxyFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasLSDatabaseAccess;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultFactory;
-(id)applicationProxyForBundleURL:(id)arg0 ;
-(id)defaultApplicationWorkspace;
-(id)extensionPointForIdentifier:(id)arg0 platform:(id)arg1 ;
-(id)plugInKitProxyForURL:(id)arg0 ;
-(id)plugInKitProxyForUUID:(id)arg0 ;
-(id)plugInRecordEnumerator;
-(id)plugInRecordEnumeratorWithExtensionPointName:(id)arg0 platform:(unsigned int)arg1 ;
-(id)plugInRecordForIdentifier:(id)arg0 ;
-(id)plugInRecordForUUID:(id)arg0 ;
-(id)pluginKitProxyForIdentifier:(id)arg0 ;


@end


#endif