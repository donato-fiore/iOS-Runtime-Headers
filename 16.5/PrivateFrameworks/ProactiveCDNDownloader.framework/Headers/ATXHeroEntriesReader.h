// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEROENTRIESREADER_H
#define ATXHEROENTRIESREADER_H


#import <Foundation/Foundation.h>


@interface ATXHeroEntriesReader : NSObject



+(BOOL)validateReader:(id)arg0 pbEntries:(id)arg1 ;
+(id)appAndClipEntryFromPbEntries:(id)arg0 position:(NSUInteger)arg1 ;
+(id)loadAppAndClipEntriesFromData:(id)arg0 ;
+(id)loadAppAndClipEntriesFromFileURL:(id)arg0 ;


@end


#endif