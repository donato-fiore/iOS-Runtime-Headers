// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXIFMETADATAEXTRACTOR_H
#define EXIFMETADATAEXTRACTOR_H

@class NSDictionary, NSMutableArray, NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ExifMetadataExtractor : NSObject {
    NSDictionary *desiredAppleMakerKeyPairs;
}


@property (readonly) NSDictionary *allMetadata; // ivar: allMetadata
@property (retain) NSMutableArray *desiredExifKeysArray; // ivar: desiredExifKeysArray
@property (readonly) NSMutableArray *facesArray; // ivar: facesArray
@property (readonly) BOOL hadAllRequestedKeys; // ivar: hadAllRequestedKeys
@property (retain) NSURL *inFileURL; // ivar: inFileURL
@property (readonly) NSMutableDictionary *metadataDictionary; // ivar: metadataDictionary
@property BOOL saveAllMetadata; // ivar: saveAllMetadata


-(BOOL)CopyFromMakerMediaDict:(id)arg0 toDict:(id)arg1 ;
-(BOOL)copyKeysFromDictionary:(id)arg0 ;
-(BOOL)keyIsDesired:(id)arg0 ;
-(id)init;
-(short)processFile;
-(void)CopyFacesDataFromAuxDictionary:(id)arg0 toArray:(id)arg1 ;
-(void)performCorrectionsOnDictionary:(id)arg0 ;


@end


#endif