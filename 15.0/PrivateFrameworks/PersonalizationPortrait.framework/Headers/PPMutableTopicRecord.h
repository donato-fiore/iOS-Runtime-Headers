// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPMUTABLETOPICRECORD_H
#define PPMUTABLETOPICRECORD_H

@class NSString;


#import "PPTopicRecord.h"
#import "PPTopicMetadata.h"
#import "PPSource.h"
#import "PPTopic.h"

@interface PPMutableTopicRecord : PPTopicRecord

@property (nonatomic) NSUInteger algorithm;
@property (nonatomic) CGFloat decayRate;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) CGFloat initialScore;
@property (nonatomic) BOOL isLocal;
@property (retain, nonatomic) PPTopicMetadata *metadata;
@property (nonatomic) CGFloat sentimentScore;
@property (retain, nonatomic) PPSource *source;
@property (retain, nonatomic) PPTopic *topic;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif