// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIALIBRARYGROUP_H
#define SHMEDIALIBRARYGROUP_H

@class NSString, NSMutableArray, NSArray;
@protocol SHMediaLibraryItem;

#import <Foundation/Foundation.h>

#import "SHMediaLibraryItemMetadata.h"

@interface SHMediaLibraryGroup : NSObject <SHMediaLibraryItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) SHMediaLibraryItemMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *mutableTracksToSave; // ivar: _mutableTracksToSave
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tracksToSave;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualGroup:(id)arg0 ;
-(BOOL)validIdentifier:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 metadata:(id)arg1 tracksToSave:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 metadata:(id)arg1 ;
-(void)addTracks:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeTracks:(id)arg0 ;


@end


#endif