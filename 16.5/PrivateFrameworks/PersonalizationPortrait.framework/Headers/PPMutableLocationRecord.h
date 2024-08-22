// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPMUTABLELOCATIONRECORD_H
#define PPMUTABLELOCATIONRECORD_H

@class NSArray, NSString, NSUUID;


#import "PPLocationRecord.h"
#import "PPLocation.h"
#import "PPSource.h"

@interface PPMutableLocationRecord : PPLocationRecord

@property (nonatomic) unsigned short algorithm;
@property (retain, nonatomic) NSArray *contextualNamedEntities;
@property (nonatomic) CGFloat decayRate;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) CGFloat initialScore;
@property (retain, nonatomic) PPLocation *location;
@property (nonatomic) CGFloat sentimentScore;
@property (retain, nonatomic) PPSource *source;
@property (retain, nonatomic) NSUUID *uuid;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif