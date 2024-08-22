// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGOFFSETDICTIONARY_H
#define SGOFFSETDICTIONARY_H


#import <Foundation/Foundation.h>


@interface SGOffsetDictionary : NSObject {
    unsigned short _count;
    *? _carrierEntries;
    *? _mruCarrierEntry;
    NSUInteger _payloadOffset;
    NSUInteger _totalPayloadSize;
    NSUInteger _sizeFactor;
}




-(NSUInteger)payloadLengthForKey:(char *)arg0 ;
-(NSUInteger)seekLocationForKey:(char *)arg0 ;
-(id)fullMappingFromFile:(id)arg0 ;
-(id)initWithFilehandle:(id)arg0 sizeFactor:(NSUInteger)arg1 keyLength:(int)arg2 singleByteOffset:(BOOL)arg3 ;
-(id)stringValueForKey:(char *)arg0 fromFile:(id)arg1 ;
-(int)payloadCountForKey:(char *)arg0 ;
-(struct ? *)carrierEntryForKey:(char *)arg0 ;
-(void)dealloc;


@end


#endif