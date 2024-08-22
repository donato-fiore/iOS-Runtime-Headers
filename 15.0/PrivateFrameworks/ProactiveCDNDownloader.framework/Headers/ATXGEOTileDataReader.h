// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXGEOTILEDATAREADER_H
#define ATXGEOTILEDATAREADER_H

@protocol ATXGEOTileDataReaderProtocol;

#import <Foundation/Foundation.h>


@interface ATXGEOTileDataReader : NSObject <ATXGEOTileDataReaderProtocol>





-(id)appAndClipEntryForTileData:(id)arg0 ;
-(id)readFileURL:(id)arg0 ;
-(id)readTileData:(id)arg0 ;


@end


#endif