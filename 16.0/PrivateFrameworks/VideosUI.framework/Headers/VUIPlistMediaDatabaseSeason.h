// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIADATABASESEASON_H
#define VUIPLISTMEDIADATABASESEASON_H

@class NSArray, NSNumber;
@protocol NSCopying;


#import "VUIPlistMediaDatabaseEntity.h"
#import "VUIPlistMediaDatabaseShow.h"

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying>



@property (copy, nonatomic) NSArray *episodes; // ivar: _episodes
@property (copy, nonatomic) NSNumber *seasonNumber; // ivar: _seasonNumber
@property (weak, nonatomic) VUIPlistMediaDatabaseShow *show; // ivar: _show


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)episodeForIdentifier:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 show:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 show:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)isLocal;


@end


#endif