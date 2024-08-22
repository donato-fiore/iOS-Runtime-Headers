// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCDEVICEPIDVIDMATCHINGFILTER_H
#define _GCDEVICEPIDVIDMATCHINGFILTER_H

@class NSNumber, NSArray, NSString;
@protocol _GCDeviceMatchingFilter;

#import <Foundation/Foundation.h>


@interface _GCDevicePIDVIDMatchingFilter : NSObject <_GCDeviceMatchingFilter>

 {
    NSNumber *_vendorID;
    NSArray *_productIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)match:(id)arg0 ;
-(id)identifier;
-(id)initWithVendorID:(id)arg0 productIDs:(id)arg1 ;


@end


#endif