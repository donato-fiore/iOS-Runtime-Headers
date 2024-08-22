// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELGENERICAVITEMTIMEDMETADATASTREAMFIELDS_H
#define MPCMODELGENERICAVITEMTIMEDMETADATASTREAMFIELDS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject

@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) NSArray *artworkDictionaries; // ivar: _artworkDictionaries
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent; // ivar: _explicitContent
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif