// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMUTABLENAMEDENTITYRECORD_H
#define PPMUTABLENAMEDENTITYRECORD_H

@class NSString;


#import "PPNamedEntityRecord.h"
#import "PPNamedEntity.h"
#import "PPNamedEntityMetadata.h"
#import "PPSource.h"

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (nonatomic) NSUInteger algorithm;
@property (nonatomic) unsigned char changeType;
@property (nonatomic) CGFloat decayRate;
@property (retain, nonatomic) PPNamedEntity *entity;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) CGFloat initialScore;
@property (retain, nonatomic) PPNamedEntityMetadata *metadata;
@property (nonatomic) CGFloat sentimentScore;
@property (retain, nonatomic) PPSource *source;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif