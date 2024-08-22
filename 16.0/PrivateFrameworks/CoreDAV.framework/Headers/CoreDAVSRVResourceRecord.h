// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVSRVRESOURCERECORD_H
#define COREDAVSRVRESOURCERECORD_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CoreDAVSRVResourceRecord : NSObject

@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (retain, nonatomic) NSString *serviceString; // ivar: _serviceString
@property (retain, nonatomic) NSString *target; // ivar: _target


-(id)description;


@end


#endif