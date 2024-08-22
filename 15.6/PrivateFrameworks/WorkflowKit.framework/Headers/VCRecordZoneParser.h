// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCRECORDZONEPARSER_H
#define VCRECORDZONEPARSER_H


#import <Foundation/Foundation.h>


@interface VCRecordZoneParser : NSObject



+(BOOL)parseZoneID:(id)arg0 intoIndex:(*NSInteger)arg1 ;
+(BOOL)shouldIgnoreZoneID:(id)arg0 ;
+(id)activeRecordZone:(SEL)arg0 ;
+(id)sortedVoiceShortcutZoneIDsFromZoneIDs:(id)arg0 ;


@end


#endif