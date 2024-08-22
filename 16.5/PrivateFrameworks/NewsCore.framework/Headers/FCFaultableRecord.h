// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFAULTABLERECORD_H
#define FCFAULTABLERECORD_H

@class PBCodable, NTPBRecordBase, NSData, NSString;
@protocol FCKeyValueStoreCoding;

#import <Foundation/Foundation.h>


@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding>

 {
    os_unfair_lock_s _recordLock;
    PBCodable *_record;
    NTPBRecordBase *_recordBase;
    NSData *_recordData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readValueFromKeyValuePair:(id)arg0 ;
+(int)keyValuePairType;
-(id)init;
-(void)writeToKeyValuePair:(id)arg0 ;
-(void)writeValueToDataWriter:(id)arg0 ;


@end


#endif