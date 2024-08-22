// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXPERSONA_H
#define _EXPERSONA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _EXPersona : NSObject

@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString


+(id)currentPersona;
+(id)defaultPersona;
+(id)personaWithPersonaUniqueString:(id)arg0 ;
-(id)initWithPersonaUniqueString:(id)arg0 ;


@end


#endif