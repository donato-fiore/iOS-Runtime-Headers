// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAACCESSREADERSANDBOXEXTENSION_H
#define PAACCESSREADERSANDBOXEXTENSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PAAccessReaderSandboxExtension : NSObject {
    NSInteger _handle;
}


@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)initWithHandle:(NSInteger)arg0 forRootDirectory:(id)arg1 ;
-(id)initWithToken:(id)arg0 forPath:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif