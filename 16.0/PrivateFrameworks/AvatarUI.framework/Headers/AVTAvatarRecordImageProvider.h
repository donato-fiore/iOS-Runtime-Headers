// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARRECORDIMAGEPROVIDER_H
#define AVTAVATARRECORDIMAGEPROVIDER_H


#import <Foundation/Foundation.h>

#import "_AVTAvatarRecordImageProvider.h"

@interface AVTAvatarRecordImageProvider : NSObject

@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *backingProvider; // ivar: _backingProvider


-(id)imageForRecord:(id)arg0 scope:(id)arg1 ;
-(id)imageForRecord:(id)arg0 scope:(id)arg1 usingService:(BOOL)arg2 ;
-(id)init;
-(id)initWithBackingProvider:(id)arg0 ;
-(void)imageForRecord:(id)arg0 scope:(id)arg1 handler:(id)arg2 ;


@end


#endif