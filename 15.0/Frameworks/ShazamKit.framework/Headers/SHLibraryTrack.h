// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLIBRARYTRACK_H
#define SHLIBRARYTRACK_H

@class NSURL, NSString, NSDate, NSMutableSet, NSSet;
@protocol SHLibraryItem;

#import <Foundation/Foundation.h>

#import "SHLibraryItemMetadata.h"
#import "SHShazamKey.h"

@interface SHLibraryTrack : NSObject <SHLibraryItem>



@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *associatedGroupIdentifier; // ivar: _associatedGroupIdentifier
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableSet *labelSet; // ivar: _labelSet
@property (readonly, nonatomic) NSSet *labels;
@property (retain, nonatomic) SHLibraryItemMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly, copy, nonatomic) NSString *providerName; // ivar: _providerName
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
-(BOOL)validProviderIdentifier;
-(BOOL)validProviderName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 providerIdentifier:(id)arg1 providerName:(id)arg2 date:(id)arg3 labels:(id)arg4 ;
-(id)platformLabel;
-(void)addLabel:(id)arg0 ;
-(void)addPlatformLabel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeLabel:(id)arg0 ;


@end


#endif