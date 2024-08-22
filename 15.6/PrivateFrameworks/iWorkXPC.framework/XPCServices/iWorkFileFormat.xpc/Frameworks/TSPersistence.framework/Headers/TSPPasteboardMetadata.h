// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPASTEBOARDMETADATA_H
#define TSPPASTEBOARDMETADATA_H

@class NSHashTable;


#import "TSPObject.h"
#import "TSPDataMetadataMap.h"

@interface TSPPasteboardMetadata : TSPObject {
    PasteboardMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}


@property (readonly, nonatomic) NSHashTable *dataReferences; // ivar: _dataReferences
@property (readonly, nonatomic) BOOL isCrossAppPaste; // ivar: _isCrossAppPaste
@property (readonly, nonatomic) BOOL isCrossDocumentPaste; // ivar: _isCrossDocumentPaste


+(id)appNameAndVersion;
+(id)bundleIdentifier;
-(*void)message;
-(NSInteger)tsp_identifier;
-(id)dataMetadataForDataIdentifier:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 dataReferences:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setDataMetadata:(id)arg0 forDataIdentifier:(NSInteger)arg1 ;


@end


#endif