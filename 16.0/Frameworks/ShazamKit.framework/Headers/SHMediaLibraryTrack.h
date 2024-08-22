// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIALIBRARYTRACK_H
#define SHMEDIALIBRARYTRACK_H

@class NSURL, NSString, NSDate, NSMutableSet, NSSet, CLLocation;
@protocol SHMediaLibraryItem;

#import <Foundation/Foundation.h>

#import "SHMediaLibraryItemMetadata.h"
#import "SHShazamKey.h"

@interface SHMediaLibraryTrack : NSObject <SHMediaLibraryItem>



@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *associatedGroupIdentifier; // ivar: _associatedGroupIdentifier
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableSet *labelSet; // ivar: _labelSet
@property (readonly, nonatomic) NSSet *labels;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) SHMediaLibraryItemMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (copy, nonatomic) NSString *recognitionIdentifier; // ivar: _recognitionIdentifier
@property (retain, nonatomic) SHShazamKey *shazamKey; // ivar: _shazamKey
@property (retain, nonatomic) NSURL *shazamURL; // ivar: _shazamURL
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)libraryTrackFromMediaItem:(id)arg0 ;
+(void)updateLibraryTrack:(id)arg0 withMediaItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTrack:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 metadata:(id)arg1 labels:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 builder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 metadata:(id)arg1 builder:(id)arg2 ;
-(id)platformLabel;
-(void)addLabel:(id)arg0 ;
-(void)addPlatformLabel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBuilderBlock:(id)arg0 ;


@end


#endif