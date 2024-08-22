// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MNLPRPLATECHARACTER_H
#define _MNLPRPLATECHARACTER_H

@class NSMutableOrderedSet, NSArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _MNLPRPlateCharacter : NSObject {
    NSMutableOrderedSet *_valueMappings;
    NSArray *_validReplacementChars;
    BOOL _isPickupChar;
    NSString *_glyph;
    NSMutableDictionary *_fillTypes;
}




-(id)description;


@end


#endif