// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOSOFTWAREVERSION_H
#define HMACCESSORYINFOSOFTWAREVERSION_H

@class HMFSoftwareVersion;

#import <Foundation/Foundation.h>


@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithSoftwareVersion:(id)arg0 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif