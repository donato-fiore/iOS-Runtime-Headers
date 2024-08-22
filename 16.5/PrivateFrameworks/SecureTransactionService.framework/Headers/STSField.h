// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSFIELD_H
#define STSFIELD_H


#import <Foundation/Foundation.h>


@interface STSField : NSObject

@property (readonly) NSUInteger fieldType; // ivar: _fieldType
@property (readonly) BOOL odaRequired; // ivar: _odaRequired
@property (readonly) NSUInteger terminalType; // ivar: _terminalType


-(void)setODARequired:(BOOL)arg0 ;


@end


#endif