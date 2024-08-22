// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCCONCRETELOCATION_H
#define DOCCONCRETELOCATION_H

@class NSSet, NSString, FPItem, DOCTag;
@protocol DOCLocation, NSSecureCoding, DOCNode;

#import <Foundation/Foundation.h>


@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding>



@property (readonly) NSSet *attachedTags;
@property BOOL canBeRestored; // ivar: _canBeRestored
@property (copy) NSString *composedTitleFormat; // ivar: _composedTitleFormat
@property (readonly, copy) NSString *displayName;
@property (readonly) FPItem *fileProviderItem;
@property (readonly) BOOL isContainer;
@property BOOL isFPV2; // ivar: _isFPV2
@property (readonly) BOOL isRoot;
@property (readonly) BOOL isTaggedItemsSource;
@property (readonly) BOOL isTrash;
@property BOOL needsToResolveHierarchy; // ivar: _needsToResolveHierarchy
@property (retain) NSObject<DOCNode> *node; // ivar: _node
@property (copy) NSString *originalSourceIdentifier; // ivar: _originalSourceIdentifier
@property (copy) NSString *promptText; // ivar: _promptText
@property (retain) DOCTag *representedTag; // ivar: _representedTag
@property (readonly) NSString *shortDescription;
@property (copy) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (copy) NSString *title; // ivar: _title


+(BOOL)disableWorkaroundFor88096763;
+(BOOL)supportsSecureCoding;
+(id)browseStartingPointsLocation;
+(id)defaultLocation;
+(id)defaultSaveLocation;
+(id)emptyLocation;
+(id)iCloudDriveLocation;
+(id)recentDocumentsLocation;
+(id)searchLocation;
+(id)sharedItemsLocation;
+(id)trashedItemsLocation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fileProviderSourceDisplayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceIdentifier:(id)arg0 node:(id)arg1 ;
-(id)initWithSourceIdentifier:(id)arg0 title:(id)arg1 ;
-(id)initWithTaggedItemsSourceRepresentedTag:(id)arg0 ;
-(id)placeholderLocation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUnderlyingNodeToNode:(id)arg0 ;


@end


#endif