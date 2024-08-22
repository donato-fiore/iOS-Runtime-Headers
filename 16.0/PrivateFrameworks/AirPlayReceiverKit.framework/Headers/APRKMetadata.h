// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APRKMETADATA_H
#define APRKMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APRKMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *album; // ivar: _album
@property (readonly, copy, nonatomic) NSString *artist; // ivar: _artist
@property (readonly, copy, nonatomic) NSString *artworkDataInBase64; // ivar: _artworkDataInBase64
@property (readonly, copy, nonatomic) NSString *artworkMIMEType; // ivar: _artworkMIMEType
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger totalTrackCount; // ivar: _totalTrackCount
@property (readonly, nonatomic) NSInteger trackNumber; // ivar: _trackNumber


-(id)debugDescription;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(void)updateMedatataWithDictionary:(id)arg0 ;


@end


#endif