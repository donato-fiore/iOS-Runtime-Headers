// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGTERMDUMPER_H
#define OSLOGTERMDUMPER_H


#import <Foundation/Foundation.h>


@interface OSLogTermDumper : NSObject {
    os_trace_blob_s _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop;
    int _fd;
    BOOL _vis;
}


@property (nonatomic) unsigned char bgColor;
@property (nonatomic, getter=isBold) BOOL bold;
@property (readonly, nonatomic) unsigned char colorMode; // ivar: _colorMode
@property (nonatomic) unsigned char fgColor;
@property (readonly, nonatomic) BOOL isFancy; // ivar: _fancy
@property (nonatomic, getter=isOblique) BOOL oblique;
@property (nonatomic) unsigned short style; // ivar: _cur_attrs
@property (nonatomic, getter=isUnderlined) BOOL underline;


-(id)init;
-(id)initWithFd:(int)arg0 colorMode:(unsigned char)arg1 ;
-(unsigned int)format:(char *)arg0 ;
-(unsigned int)vformat:(char *)arg0 args:(char *)arg1 ;
-(void)_flushAttrs;
-(void)_resetAttrsForNewline;
-(void)beginEditing;
-(void)close;
-(void)dealloc;
-(void)endEditing;
-(void)flush:(BOOL)arg0 ;
-(void)hexdump:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)pad:(int)arg0 count:(NSUInteger)arg1 ;
-(void)putUUID:(unsigned char)arg0 ;
-(void)putc:(int)arg0 ;
-(void)puts:(char *)arg0 ;
-(void)startPager;
-(void)write:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)writeln;


@end


#endif