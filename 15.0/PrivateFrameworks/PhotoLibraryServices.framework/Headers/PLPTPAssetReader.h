// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPASSETREADER_H
#define PLPTPASSETREADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPTPAssetReader : NSObject {
    BOOL _shouldDeleteTemporaryFileOnDeallocation;
}


@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(id)dataSourcePathForDataRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithPath:(id)arg0 ;
-(id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg0 ;
-(void)dealloc;


@end


#endif