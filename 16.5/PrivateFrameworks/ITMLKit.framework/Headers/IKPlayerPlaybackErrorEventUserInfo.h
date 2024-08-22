// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKPLAYERPLAYBACKERROREVENTUSERINFO_H
#define IKPLAYERPLAYBACKERROREVENTUSERINFO_H

@class NSString, NSError, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL shouldStopDueToError; // ivar: _shouldStopDueToError
@property (readonly) Class superclass;


-(id)initWithError:(id)arg0 shouldStopDueToError:(BOOL)arg1 ;


@end


#endif