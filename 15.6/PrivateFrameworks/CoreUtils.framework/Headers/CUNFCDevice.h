// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUNFCDEVICE_H
#define CUNFCDEVICE_H

@class NSURL, NSUUID, NFTag;

#import <Foundation/Foundation.h>


@interface CUNFCDevice : NSObject

@property (copy, nonatomic) NSURL *advertisedURI; // ivar: _advertisedURI
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NFTag *tag; // ivar: _tag


-(id)description;


@end


#endif