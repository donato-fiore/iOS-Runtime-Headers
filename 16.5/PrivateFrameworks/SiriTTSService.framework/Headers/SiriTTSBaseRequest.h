// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSBASEREQUEST_H
#define SIRITTSBASEREQUEST_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSBaseRequest : NSObject <NSSecureCoding>

 {
    ? requestCreatedTime;
    ? clientBundleId;
    ? accessoryId;
    ? outputPath;
    ? didReportInstrument;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) id *didReportInstrument;
@property (nonatomic, copy) NSURL *outputPath;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif