// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIASTREAM_H
#define MEDIASTREAM_H

@class INObject, NSString, NSArray;


#import "Device.h"

@interface MediaStream : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) Device *groupLeader;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif