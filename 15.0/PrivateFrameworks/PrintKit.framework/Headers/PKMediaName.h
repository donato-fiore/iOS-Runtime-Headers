// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMEDIANAME_H
#define PKMEDIANAME_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKMediaName : NSObject

@property (retain) NSString *baseName; // ivar: _baseName
@property CGFloat conversionFactor; // ivar: _conversionFactor
@property (readonly) CGFloat height;
@property CGFloat heightInUnits; // ivar: _heightInUnits
@property (readonly) BOOL isRoll;
@property (retain) NSString *mediaClass; // ivar: _mediaClass
@property (retain) NSString *mediaName; // ivar: _mediaName
@property (readonly, retain) NSString *unitStr;
@property NSInteger units; // ivar: _units
@property (readonly) CGFloat width;
@property CGFloat widthInUnits; // ivar: _widthInUnits
@property (retain) NSString *widthStr; // ivar: _widthStr


+(id)pkMediaNameWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)dealloc;
-(void)parseMediaName:(id)arg0 ;


@end


#endif