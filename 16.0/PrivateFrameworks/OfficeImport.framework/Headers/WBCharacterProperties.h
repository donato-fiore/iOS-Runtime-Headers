// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBCHARACTERPROPERTIES_H
#define WBCHARACTERPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBCharacterProperties : NSObject



+(?)createTrackedPropertiesIfNeeded;
+(?)prepareForWriting:(?)arg0 properties:(?)arg1 wrdPropertiestracked;
+(?)readFrom:(?)arg0 wrdProperties:(?)arg1 documentproperties;
+(?)readFrom:(?)arg0 wrdProperties:(?)arg1 tracked:(?)arg2 documentproperties;
+(id)formattingChangeDate:(struct WrdDateTime *)arg0 ;


@end


#endif