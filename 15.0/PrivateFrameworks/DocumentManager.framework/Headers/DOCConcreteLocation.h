// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCCONCRETELOCATION_H
#define DOCCONCRETELOCATION_H

@class NSString, FPItem, NSArray;
@protocol DOCLocation, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding>



@property BOOL canBeRestored; // ivar: _canBeRestored
@property (copy) NSString *composedTitleFormat; // ivar: _composedTitleFormat
@property (retain) FPItem *fileProviderItem; // ivar: _fileProviderItem
@property BOOL isFPV2; // ivar: _isFPV2
@property (readonly) BOOL isRoot;
@property BOOL needsToResolveHierarchy; // ivar: _needsToResolveHierarchy
@property (copy) NSString *originalSourceIdentifier; // ivar: _originalSourceIdentifier
@property (copy) NSString *promptText; // ivar: _promptText
@property (readonly) NSString *shortDescription;
@property (copy) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (copy) NSArray *tags; // ivar: _tags
@property (copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)defaultLocation;
+(id)defaultSaveLocation;
+(id)emptyLocation;
+(id)iCloudDriveLocation;
+(id)recentDocumentsLocation;
+(id)searchLocation;
+(id)sharedItemsLocation;
+(id)trashedItemsLocation;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceIdentifier:(id)arg0 fileProviderItem:(id)arg1 ;
-(id)initWithTags:(id)arg0 ;
-(id)placeholderLocation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif