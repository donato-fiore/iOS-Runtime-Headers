// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPOBJECTSERIALIZATIONREADASSISTANT_H
#define TSPOBJECTSERIALIZATIONREADASSISTANT_H

@class NSURL, NSDictionary, NSString;
@protocol TSPDecoderReadCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPComponent.h"

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>

 {
    TSPObjectContext *_context;
    NSURL *_resourcesFolderURL;
    NSDictionary *_identifierToResourceNameDictionary;
    NSUInteger _readVersion;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    BOOL _deserializeAsPasteboard;
    BOOL _resetObjectUUIDs;
    BOOL _shouldDecodeMissingDataAsRemote;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fileFormatVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCrossAppPaste; // ivar: _isCrossAppPaste
@property (nonatomic) BOOL isCrossDocumentPaste; // ivar: _isCrossDocumentPaste
@property (readonly, nonatomic) NSUInteger readVersion;
@property (readonly, nonatomic) NSInteger sourceType;
@property (readonly) Class superclass;


-(BOOL)canResolveExternalReferences;
-(BOOL)processMetadataObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldDecodeMissingDataAsRemote;
-(BOOL)shouldResolveExternalReferencesUsingObjectUUID;
-(NSInteger)objectIdentifierForUUID:(id)arg0 ;
-(id)cachedDataForIdentifier:(NSInteger)arg0 ;
-(id)cachedMetadataObject;
-(id)dataInfoForIdentifier:(NSInteger)arg0 ;
-(id)decodeObjectWithData:(id)arg0 packageURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)metadataComponent;
-(id)objectUUIDForExternalReferenceToIdentifier:(NSInteger)arg0 ;
-(id)resourceURLForIdentifier:(NSInteger)arg0 ;
-(id)rootObjectComponent;


@end


#endif