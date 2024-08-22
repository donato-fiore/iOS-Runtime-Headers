// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVPROFILEINFO_H
#define KVPROFILEINFO_H

@class NSData, NSString;
@protocol KVJSONEncodable, KVJSONDecodable;

#import <Foundation/Foundation.h>


@interface KVProfileInfo : NSObject <KVJSONEncodable, KVJSONDecodable>

 {
    *ProfileInfo _profileInfo;
}


@property (readonly, nonatomic) NSData *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)capturedWithDatasetCount:(unsigned int)arg0 error:(*id)arg1 ;
+(id)syntheticWithDatasetCount:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProfileInfo:(id)arg0 ;
-(id)JSONWithIndent:(unsigned char)arg0 ;
-(id)buildVersion;
-(id)capturedTime;
-(id)deviceType;
-(id)init;
-(id)initFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithBuffer:(id)arg0 error:(*id)arg1 ;
-(id)initWithDatasetCount:(unsigned int)arg0 capturedTime:(id)arg1 deviceType:(id)arg2 buildVersion:(id)arg3 error:(*id)arg4 ;
-(unsigned int)datasetCount;


@end


#endif