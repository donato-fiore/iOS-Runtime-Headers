// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETRESOURCECREATIONOPTIONS_H
#define PHASSETRESOURCECREATIONOPTIONS_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHAssetResourceCreationOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *alternateImportImageDate; // ivar: _alternateImportImageDate
@property (nonatomic) int burstPickType; // ivar: _burstPickType
@property (retain, nonatomic) NSString *forcePairingIdentifier; // ivar: _forcePairingIdentifier
@property (copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (nonatomic) BOOL shouldIngestInPlace; // ivar: _shouldIngestInPlace
@property (nonatomic) BOOL shouldMoveFile; // ivar: _shouldMoveFile
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)propertyListRepresentation;


@end


#endif