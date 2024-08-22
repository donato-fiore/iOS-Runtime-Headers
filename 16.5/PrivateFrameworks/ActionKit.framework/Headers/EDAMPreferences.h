// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMPREFERENCES_H
#define EDAMPREFERENCES_H

@class NSDictionary, NSNumber;


#import "FATObject.h"

@interface EDAMPreferences : FATObject

@property (retain, nonatomic) NSDictionary *preferences; // ivar: _preferences
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(id)structFields;
+(id)structName;


@end


#endif