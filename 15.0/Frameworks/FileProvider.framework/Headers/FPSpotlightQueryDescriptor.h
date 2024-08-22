// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTQUERYDESCRIPTOR_H
#define FPSPOTLIGHTQUERYDESCRIPTOR_H

@class CSSearchQuery, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FPQueryEnumerationSettings.h"

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying>

 {
    CSSearchQuery *_searchQuery;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) FPQueryEnumerationSettings *settings; // ivar: _settings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg0 ;
-(BOOL)keepCollectorsAlive;
-(BOOL)supportsQueryingAllMountPoints;
-(NSUInteger)desiredCount;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)queryStringForMountPoint:(id)arg0 ;
-(void)augmentQueryContext:(id)arg0 ;


@end


#endif