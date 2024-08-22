// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCHATLENGTHESTIMATOR_H
#define SGCHATLENGTHESTIMATOR_H

@class NSMutableData, NSString;

#import <Foundation/Foundation.h>


@interface SGChatLengthEstimator : NSObject {
    int _fd;
    NSMutableData *_backingData;
    *unsigned short _countPtr;
    char * _sketch;
    _opaque_pthread_mutex_t _lock;
}


@property (readonly) NSUInteger count;
@property (readonly) NSString *path; // ivar: _path


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(NSUInteger)estimateMessagesInChat:(id)arg0 ;
-(id)init;
-(id)initInMemory;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(void)recordMessageInChat:(id)arg0 ;


@end


#endif