// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAPACKAGELAYER_H
#define HUCAPACKAGELAYER_H

@class CALayer, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HUCAPackageLayer : NSObject

@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSSet *tags; // ivar: _tags


+(id)_allTags;
+(id)_tagsForName:(id)arg0 ;
-(id)initWithName:(id)arg0 layer:(id)arg1 ;
-(void)_applyPrimaryColorWithModifiers:(id)arg0 ;
-(void)applyModifiers:(id)arg0 ;


@end


#endif