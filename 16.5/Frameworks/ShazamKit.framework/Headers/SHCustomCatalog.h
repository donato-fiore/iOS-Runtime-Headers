// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCUSTOMCATALOG_H
#define SHCUSTOMCATALOG_H

@class NSData;


#import "SHCatalog.h"
#import "SHCustomCatalogConfiguration.h"
#import "SHCustomCatalogContainer.h"

@interface SHCustomCatalog : SHCatalog

@property (readonly, copy, nonatomic) SHCustomCatalogConfiguration *_configuration; // ivar: __configuration
@property (readonly, nonatomic) SHCustomCatalogContainer *customCatalogContainer; // ivar: _customCatalogContainer
@property (readonly, nonatomic) NSData *dataRepresentation;


+(id)new;
-(BOOL)addCustomCatalog:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCustomCatalogDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCustomCatalogFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)addReferenceSignature:(id)arg0 representingMediaItems:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)_createMatcher;
-(id)_customCatalogConfiguration;
-(id)init;
-(id)initWithConfiguration:(id)arg0 dataRepresentation:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)enumerateWithBlock:(id)arg0 ;


@end


#endif