// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSSTORAGEFILE_H
#define CKDSSTORAGEFILE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CKDSStorageFile : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL isOwned; // ivar: _isOwned


-(id)initWithURL:(id)arg0 isOwned:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif