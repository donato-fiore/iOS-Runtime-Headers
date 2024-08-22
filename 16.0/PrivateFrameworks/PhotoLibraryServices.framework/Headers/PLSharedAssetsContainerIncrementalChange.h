// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSHAREDASSETSCONTAINERINCREMENTALCHANGE_H
#define PLSHAREDASSETSCONTAINERINCREMENTALCHANGE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger collectionChangeType; // ivar: _collectionChangeType
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration; // ivar: _hasNoOtherAssetChangesRequiringMomentGeneration
@property (retain, nonatomic) NSArray *highlightContainerChanges; // ivar: _highlightContainerChanges
@property (nonatomic) unsigned char mediaType; // ivar: _mediaType
@property (nonatomic) NSInteger sharingChange; // ivar: _sharingChange
@property (nonatomic) unsigned char suggestionStateChange; // ivar: _suggestionStateChange


+(BOOL)supportsSecureCoding;
-(BOOL)hasChanges;
-(BOOL)hasChangesAffectingSharingComposition;
-(BOOL)hasSharingChanges;
-(BOOL)hasSharingOrSuggestionChanges;
-(BOOL)hasSuggestionChanges;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addHighlightContainerChange:(id)arg0 sourceHighlightID:(id)arg1 destinationHighlightID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeChangesFrom:(id)arg0 ;


@end


#endif