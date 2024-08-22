// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGEVENTMESSAGEARGUMENT_H
#define OSLOGEVENTMESSAGEARGUMENT_H


#import <Foundation/Foundation.h>

#import "OSLogEventDecomposedMessage.h"

@interface OSLogEventMessageArgument : NSObject {
    OSLogEventDecomposedMessage *_decomposedMessage;
    *os_log_fmt_raw_placeholder _rawArg;
    NSUInteger _sizeofLong;
}


@property (readonly, nonatomic) NSUInteger availability;
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) NSInteger int64Value;
@property ? longDoubleValue;
@property (readonly, nonatomic) NSObject *objectRepresentation;
@property (readonly, nonatomic) NSUInteger privacy;
@property (readonly, nonatomic) *void rawBytes;
@property (readonly, nonatomic) unsigned short rawBytesLength;
@property (readonly, nonatomic) NSUInteger scalarCategory;
@property (readonly, nonatomic) NSUInteger scalarType;
@property (readonly, nonatomic) NSUInteger unsignedInt64Value;


-(id)initWithProxy:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif