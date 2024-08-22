// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUINOWPLAYINGUSERTRIGGEREDFEATURE_H
#define VUINOWPLAYINGUSERTRIGGEREDFEATURE_H

@class NSString;
@protocol VUINowPlayingUserTriggeredFeature;

#import <Foundation/Foundation.h>


@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // ivar: _autoRemove
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif