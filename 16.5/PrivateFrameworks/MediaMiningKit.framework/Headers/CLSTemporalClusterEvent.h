// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSTEMPORALCLUSTEREVENT_H
#define CLSTEMPORALCLUSTEREVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSTemporalClusterEvent : NSObject

@property (readonly, nonatomic) unsigned char category; // ivar: _category
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(unsigned char)_categoryFromPortraitEventCategory:(unsigned char)arg0 ;
-(id)initWithName:(id)arg0 category:(unsigned char)arg1 ;
-(id)initWithPortraitEvent:(id)arg0 ;


@end


#endif