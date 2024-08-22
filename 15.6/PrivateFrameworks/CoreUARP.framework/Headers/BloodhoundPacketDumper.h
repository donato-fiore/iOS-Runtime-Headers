// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLOODHOUNDPACKETDUMPER_H
#define BLOODHOUNDPACKETDUMPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BloodhoundPacketDumper : NSObject {
    *pcap _pcap;
    *pcap_dumper _dumper;
    BOOL _externalDumper;
    NSString *_fileName;
}




-(id)initWithDumper:(struct pcap_dumper *)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(void)dealloc;
-(void)dumpPacket:(id)arg0 type:(unsigned int)arg1 metadata:(*void)arg2 metadataLength:(NSUInteger)arg3 ;


@end


#endif