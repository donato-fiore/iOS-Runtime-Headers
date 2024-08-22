// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCLOCALAREA_H
#define FCLOCALAREA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FCLocalArea : NSObject

@property (readonly, nonatomic) NSString *areaID;
@property (retain, nonatomic) NSArray *bbox; // ivar: _bbox
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBboxValid; // ivar: _isBboxValid
@property (readonly, nonatomic) CGFloat maxLat;
@property (readonly, nonatomic) CGFloat maxLon;
@property (readonly, nonatomic) CGFloat minLat;
@property (readonly, nonatomic) CGFloat minLon;
@property (readonly, nonatomic) NSArray *regionIds; // ivar: _regionIds


-(BOOL)containsLocation:(id)arg0 ;
-(BOOL)containsPointAtLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(BOOL)isValue:(CGFloat)arg0 betweenValue:(CGFloat)arg1 andValue:(CGFloat)arg2 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bbox:(id)arg1 regionIDs:(id)arg2 ;


@end


#endif