// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWBASECOLLABORATIONSOURCE_H
#define _SWBASECOLLABORATIONSOURCE_H

@class NSHashTable, NSString, NSFileProviderDomain;
@protocol NSFileProviderServiceSource, NSXPCListenerDelegate, NSFileProviderServiceSource_Private, _SWFileProviderCollaborationProviding;

#import <Foundation/Foundation.h>


@interface _SWBaseCollaborationSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, NSFileProviderServiceSource_Private>

 {
    NSHashTable *_listeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSObject<_SWFileProviderCollaborationProviding> *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, copy, nonatomic) NSString *requiredEntitlement;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithItemIdentifier:(id)arg0 domain:(id)arg1 extension:(id)arg2 ;
-(id)interface;
-(id)makeListenerEndpointAndReturnError:(*id)arg0 ;


@end


#endif