// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFSEVENT_H
#define BRCFSEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRCFSEvent : NSObject

@property (readonly, nonatomic) NSUInteger eventID; // ivar: _eventID
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (retain, nonatomic) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 flags:(unsigned int)arg1 eventID:(NSUInteger)arg2 ;


@end


#endif