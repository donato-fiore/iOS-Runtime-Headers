// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSWITCHRECIPE_H
#define AXSWITCHRECIPE_H

@class NSString, NSArray, NSUUID;

#import <Foundation/Foundation.h>


@interface AXSwitchRecipe : NSObject {
    NSString *_name;
}


@property (retain, nonatomic) NSArray *mappings; // ivar: _mappings
@property (copy, nonatomic) NSString *menuIconIdentifier; // ivar: _menuIconIdentifier
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL shouldContinueScanning;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSString *unlocalizedName; // ivar: _unlocalizedName
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)recipeWithDictionaryRepresentation:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;


@end


#endif