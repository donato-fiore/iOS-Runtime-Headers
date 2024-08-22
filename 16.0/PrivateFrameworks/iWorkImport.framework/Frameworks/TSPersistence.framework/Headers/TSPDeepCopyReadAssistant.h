// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDEEPCOPYREADASSISTANT_H
#define TSPDEEPCOPYREADASSISTANT_H

@class NSDictionary, NSString;
@protocol TSPDecoderReadCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPDeepCopyObjectMap.h"
#import "TSPObject.h"
#import "TSPComponent.h"

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>

 {
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    TSPObject *_cachedMetadataObject;
    NSDictionary *_cachedDataMap;
    BOOL _isDecodingTransientObject;
    NSUInteger _readVersion;
    TSPComponent *_component;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) Class superclass;


-(BOOL)canResolveExternalReferences;
-(BOOL)isDecodingTransientObject;
-(BOOL)processMetadataObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldDecodeMissingDataAsRemote;
-(BOOL)shouldResolveExternalReferencesUsingObjectUUID;
-(NSInteger)objectIdentifierForUUID:(id)arg0 ;
-(id)cachedDataForIdentifier:(NSInteger)arg0 ;
-(id)cachedMetadataObject;
-(id)dataInfoForIdentifier:(NSInteger)arg0 ;
-(id)decodeDeepCopySerializedData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 objectMap:(id)arg1 cachedMetadataObject:(id)arg2 cachedDataMap:(id)arg3 ;
-(id)metadataComponent;
-(id)objectUUIDForExternalReferenceToIdentifier:(NSInteger)arg0 ;
-(id)rootObjectComponent;


@end


#endif