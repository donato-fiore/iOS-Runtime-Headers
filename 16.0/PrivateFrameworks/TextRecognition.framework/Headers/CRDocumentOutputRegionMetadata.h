// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRDOCUMENTOUTPUTREGIONMETADATA_H
#define CRDOCUMENTOUTPUTREGIONMETADATA_H

@class NSString;
@protocol CRCodable;

#import <Foundation/Foundation.h>


@interface CRDocumentOutputRegionMetadata : NSObject <CRCodable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger numFilteredRegions; // ivar: _numFilteredRegions
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 ;


@end


#endif