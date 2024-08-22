// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPNOWPLAYINGINFOLANGUAGEOPTION_H
#define MPNOWPLAYINGINFOLANGUAGEOPTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoLanguageOption : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *languageOptionCharacteristics;
@property (readonly, nonatomic) NSUInteger languageOptionType;
@property (readonly, nonatomic) NSString *languageTag;
@property (readonly, nonatomic) *void mrLanguageOption; // ivar: _mrLanguageOption


-(BOOL)isAutomaticAudibleLanguageOption;
-(BOOL)isAutomaticLegibleLanguageOption;
-(BOOL)isEqualToLanguageOption:(id)arg0 ;
-(id)copyExternalRepresentation;
-(id)initWithMRLanguageOption:(*void)arg0 ;
-(id)initWithType:(NSUInteger)arg0 languageTag:(id)arg1 characteristics:(id)arg2 displayName:(id)arg3 identifier:(id)arg4 ;
-(void)dealloc;


@end


#endif