// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPCONNECTIONFLAGSEARCHRESULTS_H
#define MFIMAPCONNECTIONFLAGSEARCHRESULTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFIMAPConnectionFlagSearchResults : NSObject {
    NSMutableDictionary *_uidsWithFlagMaskSet;
    NSMutableDictionary *_uidsWithoutFlagMaskSet;
}




-(NSUInteger)_flagsForUID:(NSUInteger)arg0 ;
-(id)_indexSetFromUIDs:(id)arg0 ;
-(id)copyResponseForUID:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(void)cacheStateForUIDs:(id)arg0 mask:(NSUInteger)arg1 existenceSetsFlag:(BOOL)arg2 ;


@end


#endif