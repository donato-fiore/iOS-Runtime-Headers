// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMTESTEVENT_H
#define BMTESTEVENT_H

@class NSString;
@protocol BMStoreData, NSSecureCoding;


#import "BMEventBase.h"

@interface BMTestEvent : BMEventBase <BMStoreData, NSSecureCoding>

 {
    ? _data;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(unsigned int)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)serialize;
-(unsigned int)content;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif