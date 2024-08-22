// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLMASTERCHANGE_H
#define CPLMASTERCHANGE_H

@class NSDictionary, NSString, NSDate, NSArray, NSData;


#import "CPLItemChange.h"

@interface CPLMasterChange : CPLItemChange {
    NSDictionary *_resourcePerResourceType;
}


@property (copy, nonatomic) NSString *codec; // ivar: _codec
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSArray *expungeableResourceStates; // ivar: _expungeableResourceStates
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) NSUInteger fullSizeJPEGSource; // ivar: _fullSizeJPEGSource
@property (copy, nonatomic) NSDate *importDate; // ivar: _importDate
@property (copy, nonatomic) NSString *importGroupIdentifier; // ivar: _importGroupIdentifier
@property (nonatomic) short importedBy; // ivar: _importedBy
@property (copy, nonatomic) NSString *importedByBundleIdentifier; // ivar: _importedByBundleIdentifier
@property (copy, nonatomic) NSString *importedByDisplayName; // ivar: _importedByDisplayName
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSString *itemType; // ivar: _itemType
@property (retain, nonatomic) NSData *mediaMetaData; // ivar: _mediaMetaData
@property (copy, nonatomic) NSString *mediaMetaDataType; // ivar: _mediaMetaDataType
@property (nonatomic) NSInteger originalOrientation; // ivar: _originalOrientation
@property (copy, nonatomic) NSString *originatingFingerprint; // ivar: _originatingFingerprint
@property (copy, nonatomic) NSArray *resources; // ivar: _resources
@property (nonatomic) short videoFrameRate; // ivar: _videoFrameRate


-(BOOL)allowsToOnlyUploadNewResources;
-(BOOL)isMasterChange;
-(BOOL)isResourceTypeAGeneratedDerivative:(NSUInteger)arg0 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsResourceType:(NSUInteger)arg0 ;
-(BOOL)supportsResources;
-(BOOL)validateRecordForTracker:(id)arg0 ;
-(NSInteger)dequeueOrder;
-(NSUInteger)dataClassType;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)init;
-(id)name;
-(id)propertiesDescription;
-(id)propertiesForChangeType:(NSUInteger)arg0 ;
-(id)resourceForType:(NSUInteger)arg0 ;
-(void)_copyDerivatives:(*NSUInteger)arg0 count:(int)arg1 ifMatchingResourceType:(NSUInteger)arg2 fromRecord:(id)arg3 inResourcePerType:(id)arg4 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif