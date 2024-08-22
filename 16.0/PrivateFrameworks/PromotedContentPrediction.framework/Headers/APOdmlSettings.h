// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLSETTINGS_H
#define APODMLSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APOdmlSettings : NSObject

@property (readonly, nonatomic) NSUInteger assetManagerType; // ivar: _assetManagerType
@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;
@property (readonly, nonatomic) NSUInteger placementType; // ivar: _placementType
@property (readonly, nonatomic) NSString *treatmentID;


+(void)prewarmModelWithPlacementType:(NSUInteger)arg0 assetManagerType:(NSUInteger)arg1 ;
-(id)initWithPlacementType:(NSUInteger)arg0 assetManagerType:(NSUInteger)arg1 ;
-(id)serverRequestDictionary;


@end


#endif