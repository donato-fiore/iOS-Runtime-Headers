// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLASSKITCOLORANDMASCOTUTILITY_H
#define CRKCLASSKITCOLORANDMASCOTUTILITY_H


#import <Foundation/Foundation.h>


@interface CRKClassKitColorAndMascotUtility : NSObject



+(BOOL)setColor:(NSUInteger)arg0 forClass:(id)arg1 error:(*id)arg2 ;
+(BOOL)setMascot:(NSUInteger)arg0 forClass:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)asmHash:(NSUInteger)arg0 forString:(id)arg1 ;
+(NSUInteger)classColorFromClassName:(id)arg0 ;
+(NSUInteger)colorForClass:(id)arg0 ;
+(NSUInteger)colorTypeForColorIdentifier:(id)arg0 ;
+(NSUInteger)defaultMascot;
+(NSUInteger)mascotForClass:(id)arg0 ;
+(NSUInteger)mascotTypeForMascotIdentifier:(id)arg0 ;
+(id)classThemeColors;
+(id)colorIdentifierForColorType:(NSUInteger)arg0 ;
+(id)colorTypesByColorIdentifier;
+(id)mascotIdentifierForMascotType:(NSUInteger)arg0 ;
+(id)mascotTypesByMascotIdentifier;


@end


#endif