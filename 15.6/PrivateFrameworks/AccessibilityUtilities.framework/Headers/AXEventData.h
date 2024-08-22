// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXEVENTDATA_H
#define AXEVENTDATA_H


#import <Foundation/Foundation.h>


@interface AXEventData : NSObject {
    _AXEventDataStorage _storage;
}


@property (readonly, nonatomic) char * dataBytes;
@property (readonly, nonatomic) NSInteger dataLength;
@property (readonly, nonatomic) NSInteger eventSenderIdentifier;
@property (readonly, nonatomic) float eventValue1;
@property (readonly, nonatomic) float eventValue2;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (readonly, nonatomic) NSInteger page;
@property (readonly, nonatomic) NSInteger usage;
@property (readonly, nonatomic) BOOL wasPostedByAccessibility;


+(id)dataWithBytes:(char *)arg0 length:(NSInteger)arg1 ;
+(id)dataWithSender:(NSInteger)arg0 ;
+(id)dataWithSender:(NSInteger)arg0 page:(NSInteger)arg1 usage:(NSInteger)arg2 modifierFlags:(NSInteger)arg3 eventValue1:(float)arg4 eventValue2:(float)arg5 ;
-(id)description;
-(id)init;


@end


#endif