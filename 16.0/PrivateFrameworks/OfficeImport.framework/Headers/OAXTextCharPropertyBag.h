// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXTEXTCHARPROPERTYBAG_H
#define OAXTEXTCHARPROPERTYBAG_H


#import <Foundation/Foundation.h>


@interface OAXTextCharPropertyBag : NSObject



+(?)readCharacterProperties:(?)arg0 characterPropertiesdrawingState;
+(?)readFontcharacterProperties;
+(?)readFormatting:(?)arg0 characterPropertiesdrawingState;
+(id)oaxUnderlineMap;
+(id)stringWithCapsType:(unsigned char)arg0 ;
+(id)stringWithStrikeThroughType:(unsigned char)arg0 ;
+(id)stringWithUnderlineType:(unsigned char)arg0 ;
+(unsigned char)readUnderlineType:(id)arg0 ;


@end


#endif