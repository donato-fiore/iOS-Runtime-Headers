// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAENDPOINT_H
#define AAENDPOINT_H

@class NSString, NSURL;
@protocol AAEndpointType;

#import <Foundation/Foundation.h>


@interface AAEndpoint : NSObject <AAEndpointType>

 {
    ? url;
    ? name;
    ? sharedContainerIdentifier;
}


@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;


-(id)init;
-(id)initWithURL:(id)arg0 name:(id)arg1 sharedContainerIdentifier:(id)arg2 ;


@end


#endif