// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIDSWRITEREQUEST_H
#define CUIDSWRITEREQUEST_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CUIDSWriteRequest.h"

@interface CUIDSWriteRequest : NSObject {
    char * writeBase;
    char * writePtr;
    char * writeEnd;
    CUIDSWriteRequest *next;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSData *data; // ivar: _data




@end


#endif