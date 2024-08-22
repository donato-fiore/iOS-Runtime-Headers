// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNANIMATIONPLUGINMENU_H
#define KNANIMATIONPLUGINMENU_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KNAnimationPluginMenu : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_localizedStringToDirectionMap;
    NSMutableDictionary *_directionToLocalizedStringMap;
    NSMutableArray *_localizedDirections;
    NSMutableArray *_directions;
}


@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger defaultDirection; // ivar: _defaultDirection
@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) NSArray *localizedDirections;


+(BOOL)supportsSecureCoding;
+(id)animationPluginMenu;
+(id)localizedStringForDirection:(NSUInteger)arg0 shortVersion:(BOOL)arg1 ;
-(BOOL)containsDirection:(NSUInteger)arg0 ;
-(NSUInteger)directionForIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexForDirection:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedStringForDirection:(NSUInteger)arg0 ;
-(void)addDirection:(NSUInteger)arg0 localizedMenuString:(id)arg1 ;
-(void)addDirection:(NSUInteger)arg0 useShortString:(BOOL)arg1 ;
-(void)copyToInstance:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif