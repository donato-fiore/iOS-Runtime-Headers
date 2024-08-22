// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISRESOURCEPROVIDER_H
#define ISRESOURCEPROVIDER_H

@class NSString, NSDictionary, NSUUID, NSData, NSMutableDictionary, NSArray, IFSymbol;
@protocol ISCompositorResourceProvider, ISCompositorResource;

#import <Foundation/Foundation.h>

#import "ISCustomRecipe.h"

@interface ISResourceProvider : NSObject <ISCompositorResourceProvider>



@property (readonly) ISCustomRecipe *customRecipe;
@property (retain) ISCustomRecipe *customRecipe; // ivar: _customRecipe
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *decorationResources; // ivar: _decorationResources
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<ISCompositorResource> *iconResource;
@property NSUInteger iconShape; // ivar: _iconShape
@property (readonly) BOOL isDocumentBadge;
@property BOOL isGenericProvider; // ivar: _isGenericProvider
@property (readonly) BOOL isPrecomposed;
@property NSUInteger lsDatabaseSequenceNumber; // ivar: _lsDatabaseSequenceNumber
@property (retain) NSUUID *lsDatabaseUUID; // ivar: _lsDatabaseUUID
@property NSUInteger options; // ivar: _options
@property (retain) NSData *resourceToken; // ivar: _resourceToken
@property (readonly) NSMutableDictionary *resourcesByResourceKey; // ivar: _resourcesByResourceKey
@property (retain) NSArray *sourceRecordIdentifiers; // ivar: _sourceRecordIdentifiers
@property (readonly) Class superclass;
@property (readonly) IFSymbol *symbol;
@property (readonly) NSObject<ISCompositorResource> *templateIconResource; // ivar: _templateIconResource
@property (readonly) NSData *validationToken;


+(id)defaultIconResourceProvider;
+(id)resourceProviderWithLSIconReource:(id)arg0 ;
+(id)resourceProviderWithRecord:(id)arg0 options:(NSUInteger)arg1 ;
+(id)resourceProviderWithTypeIdentifier:(id)arg0 options:(NSUInteger)arg1 ;
+(id)resourceWithBundleURL:(id)arg0 iconDictionary:(id)arg1 options:(NSUInteger)arg2 ;
+(id)resourceWithRecord:(id)arg0 options:(NSUInteger)arg1 ;
+(id)resourceWithTypeCode:(unsigned int)arg0 options:(NSUInteger)arg1 ;
+(id)resourceWithTypeIdentifier:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_isAppleResource;
-(id)init;
-(id)initWithResource:(id)arg0 templateResource:(id)arg1 ;
-(id)initWithResources:(id)arg0 ;
-(id)resourceForKey:(id)arg0 ;
-(id)resourceNamed:(id)arg0 ;


@end


#endif