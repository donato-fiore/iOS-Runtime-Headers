// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKEVENTDATA_H
#define _DKEVENTDATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _DKEventData : NSObject {
    NSUInteger _version;
    NSData *_event;
    NSUInteger _uncompressedLength;
}




+(id)fromPBCodable:(id)arg0 ;
-(id)toPBCodable;


@end


#endif