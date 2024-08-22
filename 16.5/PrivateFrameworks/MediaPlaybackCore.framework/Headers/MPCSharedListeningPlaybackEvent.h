// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSHAREDLISTENINGPLAYBACKEVENT_H
#define MPCSHAREDLISTENINGPLAYBACKEVENT_H

@class MPModelGenericObject;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningPlaybackEvent : NSObject

@property (readonly, nonatomic) MPModelGenericObject *item; // ivar: _item
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind


-(id)description;
-(id)initWithKind:(NSInteger)arg0 ;
-(id)initWithKind:(NSInteger)arg0 item:(id)arg1 ;


@end


#endif