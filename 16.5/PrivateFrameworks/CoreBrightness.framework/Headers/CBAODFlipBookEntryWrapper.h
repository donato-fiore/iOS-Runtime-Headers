// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAODFLIPBOOKENTRYWRAPPER_H
#define CBAODFLIPBOOKENTRYWRAPPER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CBAODFlipBookEntryWrapper : NSObject

@property (readonly, nonatomic) *? entry;
@property (readonly, nonatomic) NSData *entryData; // ivar: _entryData


-(id)description;
-(id)initWithFlipBookEntry:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif