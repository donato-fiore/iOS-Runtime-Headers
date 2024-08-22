// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMEDIASELECTIONOPTIONINTERNAL_H
#define AVMEDIASELECTIONOPTIONINTERNAL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AVDispatchOnce.h"

@interface AVMediaSelectionOptionInternal : NSObject {
    NSString *_displayName;
    NSString *_displayNameLocaleIdentifier;
    NSArray *_groupMediaCharacteristics;
    NSArray *_optionMediaCharacteristics;
    AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
}






@end


#endif