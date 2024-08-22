// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCUSTOMCATALOG_H
#define SHCUSTOMCATALOG_H

@class NSData;


#import "SHCatalog.h"
#import "SHCustomCatalogContainer.h"

@interface SHCustomCatalog : SHCatalog {
    CGFloat _minimumQuerySignatureDuration;
}


@property (readonly, nonatomic) SHCustomCatalogContainer *customCatalogContainer; // ivar: _customCatalogContainer
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSInteger density; // ivar: _density


+(id)new;
-(BOOL)addCustomCatalog:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCustomCatalogDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCustomCatalogFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)addReferenceSignature:(id)arg0 representingMediaItems:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_bufferDuration;
-(CGFloat)minimumQuerySignatureDuration;
-(id)_createMatcher;
-(id)_initWithInstallationID:(id)arg0 ;
-(id)init;
-(id)initWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithDensity:(NSInteger)arg0 ;
-(id)initWithDensity:(NSInteger)arg0 dataRepresentation:(id)arg1 error:(*id)arg2 ;
-(void)enumerateWithBlock:(id)arg0 ;


@end


#endif