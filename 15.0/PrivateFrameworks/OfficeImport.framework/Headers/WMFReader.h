// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WMFREADER_H
#define WMFREADER_H

@class NSString;
@protocol MFReader;

#import <Foundation/Foundation.h>

#import "WMFPlayer.h"

@interface WMFReader : NSObject <MFReader>

 {
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    char * m_pBuffer;
    unsigned int m_cursor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWMFPlayer:(id)arg0 ;
-(int)checkBytesAvailable:(unsigned int)arg0 ;
-(int)moveDataCursor:(unsigned int)arg0 ;
-(int)play:(id)arg0 ;
-(int)playHeaders;
-(int)playRecord;


@end


#endif