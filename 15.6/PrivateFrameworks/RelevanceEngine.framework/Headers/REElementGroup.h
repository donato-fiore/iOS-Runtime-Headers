// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REELEMENTGROUP_H
#define REELEMENTGROUP_H

@class NSString;
@protocol REAutomaticExportedInterface, NSCopying;

#import <Foundation/Foundation.h>


@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying>



@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) NSInteger maxElementCount; // ivar: _maxElementCount


+(id)adjoiningElementGroupWithIdentifier:(id)arg0 ;
+(id)topElementGroupWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithGroupIdentifier:(id)arg0 ;


@end


#endif