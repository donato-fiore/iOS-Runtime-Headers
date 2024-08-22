// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSERIALIZATIONSUPPORT_H
#define SYSERIALIZATIONSUPPORT_H


#import <Foundation/Foundation.h>


@interface SYSerializationSupport : NSObject



+(id)archiveDataFromData:(id)arg0 formatIdentifier:(unsigned int)arg1 majorVersion:(unsigned char)arg2 minorVersion:(unsigned char)arg3 ;
+(id)archiveDataFromItemData:(id)arg0 ;
+(id)itemDataFromArchiveData:(id)arg0 majorVersion:(*NSInteger)arg1 minorVersion:(*NSInteger)arg2 error:(*id)arg3 ;


@end


#endif