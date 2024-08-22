// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCFONTPAYLOAD_H
#define MCFONTPAYLOAD_H

@class NSData, NSString, NSURL;


#import "MCPayload.h"

@interface MCFontPayload : MCPayload

@property (retain, nonatomic) NSData *fontData; // ivar: _fontData
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSURL *persistentURL; // ivar: _persistentURL


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
-(id)verboseDescription;


@end


#endif