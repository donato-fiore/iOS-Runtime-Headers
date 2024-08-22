// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSENTITY_H
#define VCSENTITY_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol VCSDictifiable;

#import <Foundation/Foundation.h>

#import "VCSEntity.h"

@interface VCSEntity : NSObject <VCSDictifiable>

 {
    NSMutableArray *_children;
    NSMutableDictionary *_propertyMap;
}


@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger entityType;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) VCSEntity *parent; // ivar: _parent
@property (readonly, nonatomic) NSArray *properties;
@property (readonly) Class superclass;


+(id)stringForType:(NSUInteger)arg0 ;
-(BOOL)hasPropertyWithName:(id)arg0 ;
-(BOOL)isValidStatus:(NSUInteger)arg0 ;
-(id)dictify;
-(id)init;
-(id)propertyForName:(id)arg0 ;
-(void)addChildEntity:(id)arg0 ;
-(void)removePropertyForName:(id)arg0 ;
-(void)setProperty:(id)arg0 ;


@end


#endif