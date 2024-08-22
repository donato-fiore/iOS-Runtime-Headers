// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRITEMPDIRSCOPEGUARD_H
#define TRITEMPDIRSCOPEGUARD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}


@property (readonly, nonatomic) NSString *canonicalPath; // ivar: _canonicalPath
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(BOOL)ifUnreferencedCleanupPath:(id)arg0 ;
+(id)refCountsLock;
-(BOOL)dispose;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif