// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKOOBMESSAGE_H
#define GKOOBMESSAGE_H


#import <Foundation/Foundation.h>


@interface GKOOBMessage : NSObject

@property (readonly) unsigned short type; // ivar: _type


-(BOOL)_checkSize:(NSUInteger)arg0 ;
-(BOOL)_checkType:(unsigned short)arg0 ;
-(id)data;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithMessageType:(unsigned short)arg0 ;


@end


#endif