// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAPLAYBACKACTIONMODEL_H
#define HMDMEDIAPLAYBACKACTIONMODEL_H

@class NSSet, MPPlaybackArchive, NSNumber;


#import "HMDActionModel.h"

@interface HMDMediaPlaybackActionModel : HMDActionModel

@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *services;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *volume;


+(id)properties;
+(id)schemaHashRoot;
-(BOOL)validForStorage;
-(id)dependentUUIDs;
-(id)validate;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif