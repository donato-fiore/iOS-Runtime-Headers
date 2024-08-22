// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGEVENTSTORETIMEREF_H
#define _OSLOGEVENTSTORETIMEREF_H


#import <Foundation/Foundation.h>


@interface _OSLogEventStoreTimeRef : NSObject {
    unsigned char _uuid;
}


@property (readonly, nonatomic) char * UUID;
@property (readonly, nonatomic) NSUInteger continuousTime; // ivar: _ct


+(id)timeRef;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithUUID:(unsigned char)arg0 continuous:(NSUInteger)arg1 ;


@end


#endif