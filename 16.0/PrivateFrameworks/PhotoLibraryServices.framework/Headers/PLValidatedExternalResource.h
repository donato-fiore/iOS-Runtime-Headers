// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVALIDATEDEXTERNALRESOURCE_H
#define PLVALIDATEDEXTERNALRESOURCE_H

@class NSString, NSURL, NSNumber, NSDate;
@protocol PLResourceIdentity, NSCopying;

#import <Foundation/Foundation.h>

#import "PLUniformTypeIdentifier.h"

@interface PLValidatedExternalResource : NSObject <PLResourceIdentity, NSCopying>



@property (retain, nonatomic) NSString *codecFourCharCode; // ivar: _codecFourCharCode
@property (nonatomic) NSInteger dataLength; // ivar: _dataLength
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL hasRecipe;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDerivative;
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (nonatomic) NSInteger ptpTrashedState; // ivar: _ptpTrashedState
@property (nonatomic) int qualitySortValue; // ivar: _qualitySortValue
@property (nonatomic) unsigned int recipeID; // ivar: _recipeID
@property (nonatomic) unsigned int resourceType; // ivar: _resourceType
@property (retain, nonatomic) NSNumber *sidecarIndex; // ivar: _sidecarIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *trashedDate; // ivar: _trashedDate
@property (nonatomic) short trashedState; // ivar: _trashedState
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (nonatomic) NSInteger unorientedHeight; // ivar: _unorientedHeight
@property (nonatomic) NSInteger unorientedWidth; // ivar: _unorientedWidth
@property (nonatomic) unsigned int version; // ivar: _version


+(id)resourceWithExternalResource:(id)arg0 ;
-(BOOL)isDefaultOrientation;
-(BOOL)isEqualToValidatedExternalResource:(id)arg0 ;
-(BOOL)isPlayableVideo;
-(NSUInteger)cplTypeWithAssetID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)persistResourceTypeToFileURL;


@end


#endif