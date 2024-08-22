// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGBIOMESTREAMEVENT_H
#define FIGBIOMESTREAMEVENT_H

@class NSString, NSDictionary;
@protocol BMStoreData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigBiomeStreamEvent : NSObject <BMStoreData, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) unsigned int dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 bundleId:(id)arg1 payload:(id)arg2 ;
-(id)serialize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif