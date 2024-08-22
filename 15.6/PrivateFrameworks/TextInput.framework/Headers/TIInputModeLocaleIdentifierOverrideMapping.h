// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIINPUTMODELOCALEIDENTIFIEROVERRIDEMAPPING_H
#define TIINPUTMODELOCALEIDENTIFIEROVERRIDEMAPPING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject

@property (readonly, nonatomic) NSDictionary *overrideMapping; // ivar: _overrideMapping


+(id)sharedInstance;
-(id)overrideLocaleForIdentifier:(id)arg0 ;
-(unsigned char)localeIdentifierHasOverride:(id)arg0 ;


@end


#endif