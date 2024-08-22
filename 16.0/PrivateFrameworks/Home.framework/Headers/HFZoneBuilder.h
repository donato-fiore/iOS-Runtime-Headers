// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFZONEBUILDER_H
#define HFZONEBUILDER_H

@class NSString, NSSet, HMZone;


#import "HFItemBuilder.h"
#import "HFMutableSetDiff.h"

@interface HFZoneBuilder : HFItemBuilder

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) HFMutableSetDiff *roomUUIDs; // ivar: _roomUUIDs
@property (readonly, nonatomic) NSSet *rooms;
@property (readonly, nonatomic) HMZone *zone;


+(Class)homeKitRepresentationClass;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_createZone;
-(id)_performValidation;
-(id)_updateName;
-(id)_updateRooms;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(void)addRoom:(id)arg0 ;
-(void)removeRoom:(id)arg0 ;


@end


#endif