// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSOCIALMEDIAHANDLE_H
#define BMSOCIALMEDIAHANDLE_H

@class NSString;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMSocialMediaHandle : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *handle; // ivar: _handle


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithBundleId:(id)arg0 handle:(id)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif