// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDIAGNOSTICSITEMPROVIDER_H
#define PXDIAGNOSTICSITEMPROVIDER_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PXDiagnosticsItemProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_loadHandlers; // ivar: __loadHandlers
@property (readonly, nonatomic) NSSet *registeredIdentifiers;


+(id)providerWithItem:(id)arg0 identifier:(id)arg1 ;
-(BOOL)hasItemForIdentifier:(id)arg0 ;
-(id)init;
-(id)itemForIdentifier:(id)arg0 ;
-(void)registerItem:(id)arg0 forIdentifier:(id)arg1 ;
-(void)registerItemForIdentifier:(id)arg0 loadHandler:(id)arg1 ;


@end


#endif