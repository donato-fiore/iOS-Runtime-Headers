// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGEVENTDECOMPOSEDMESSAGE_H
#define OSLOGEVENTDECOMPOSEDMESSAGE_H


#import <Foundation/Foundation.h>

#import "OSLogEventProxy.h"

@interface OSLogEventDecomposedMessage : NSObject {
    BOOL _hasPopulatedFields;
    BOOL _hdrNeedsFree;
    unsigned short _pubsize;
    unsigned short _privsize;
    unsigned short _placeholderCount;
    NSUInteger _variant;
    *os_log_fmt_hdr_s _hdr;
    *void _pubdata;
    *void _privdata;
    char * _fmt;
    NSUInteger _messageState;
    *os_log_fmt_raw_placeholder _rawPlaceholders;
    *void _hdr_buffer;
}


@property (readonly) NSUInteger placeholderCount;
@property (readonly, nonatomic) OSLogEventProxy *proxy; // ivar: _proxy
@property (readonly, nonatomic) NSUInteger sizeOfLong; // ivar: _sizeof_long
@property (readonly, nonatomic) NSUInteger state;


-(id)argumentAtIndex:(NSUInteger)arg0 ;
-(id)initWithEventProxy:(id)arg0 ;
-(id)literalPrefixAtIndex:(NSUInteger)arg0 ;
-(id)placeholderAtIndex:(NSUInteger)arg0 ;
-(struct os_log_fmt_raw_placeholder *)_rawPlaceholderForIndex:(NSUInteger)arg0 ;
-(void)_initializePlaceholders;
-(void)_populateFields;
-(void)_unmake;
-(void)dealloc;


@end


#endif