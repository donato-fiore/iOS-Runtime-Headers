// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBCHARACTERPROPERTIES_H
#define WBCHARACTERPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBCharacterProperties : NSObject



+(?)createTrackedPropertiesIfNeeded;
+(?)prepareForWriting:(?)arg0 properties:(?)arg1 wrdPropertiestracked;
+(?)readFrom:(?)arg0 wrdProperties:(?)arg1 tracked:(?)arg2 documentproperties;
+(id)formattingChangeDate:(struct WrdDateTime *)arg0 ;
+(void)readFrom:(id)arg0 wrdProperties:(struct WrdCharacterProperties *)arg1 document:(id)arg2 properties:(id)arg3 ;


@end


#endif