// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAGLSHAREGROUP_H
#define EAGLSHAREGROUP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EAGLSharegroup : NSObject {
    *_EAGLSharegroupPrivate _private;
}


@property (copy, nonatomic) NSString *debugLabel; // ivar: debugLabel


-(NSUInteger)APIs;
-(id)init;
-(id)initWithAPI:(NSUInteger)arg0 ;
-(id)initWithAPI:(NSUInteger)arg0 sharedWithCompute:(BOOL)arg1 ;
-(struct __GLISharedRec *)getGLIShared;
-(void)dealloc;
-(void)loadGLIPlugin:(struct __GLDPixelFormatRec *)arg0 sharedWithCompute:(BOOL)arg1 ;


@end


#endif