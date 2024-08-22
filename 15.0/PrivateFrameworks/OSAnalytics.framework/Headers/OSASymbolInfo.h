// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSASYMBOLINFO_H
#define OSASYMBOLINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OSASymbolInfo : NSObject {
    unsigned char _uuid;
    NSString *legacy_arch;
}


@property (retain) NSString *cpuArch; // ivar: _cpuArch
@property BOOL isAppleCode; // ivar: _isAppleCode
@property (retain) NSString *name; // ivar: _name
@property (readonly) NSString *path; // ivar: _path
@property NSUInteger size; // ivar: _size
@property NSUInteger start; // ivar: _start


-(id)get_uuid;
-(id)initWithAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 for:(unsigned char)arg2 ;
-(id)initWithSharedCache:(unsigned char)arg0 atBaseAddress:(NSUInteger)arg1 ;


@end


#endif