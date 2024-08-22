// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMTIMEZONE_H
#define TMTIMEZONE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMTimeZone : NSObject

@property (copy) NSString *olsonName; // ivar: _olsonName
@property (copy) NSString *source; // ivar: _source


+(id)timeZoneWithOlsonName:(id)arg0 fromSource:(id)arg1 ;
-(BOOL)hasSameOlsonNameAs:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithOlsonName:(id)arg0 fromSource:(id)arg1 ;
-(void)dealloc;


@end


#endif