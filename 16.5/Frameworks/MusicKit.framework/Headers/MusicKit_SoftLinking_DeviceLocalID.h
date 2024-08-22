// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_DEVICELOCALID_H
#define MUSICKIT_SOFTLINKING_DEVICELOCALID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_DeviceLocalID : NSObject

@property (readonly, nonatomic) NSString *databaseID; // ivar: _databaseID
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(id)description;
-(id)initWithValue:(id)arg0 databaseID:(id)arg1 ;


@end


#endif