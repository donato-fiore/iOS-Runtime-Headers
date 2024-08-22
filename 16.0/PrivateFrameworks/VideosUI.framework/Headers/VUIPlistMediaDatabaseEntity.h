// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIADATABASEENTITY_H
#define VUIPLISTMEDIADATABASEENTITY_H

@class NSString, NSURL, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>



@property (copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (copy, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (copy, nonatomic) NSURL *coverArtURL; // ivar: _coverArtURL
@property (copy, nonatomic) NSString *genreTitle; // ivar: _genreTitle
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic, getter=isLocal) NSNumber *local;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_mediaEntityPropertyDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif