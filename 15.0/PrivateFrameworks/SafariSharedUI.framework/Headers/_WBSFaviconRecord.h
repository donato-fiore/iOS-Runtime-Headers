// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WBSFAVICONRECORD_H
#define _WBSFAVICONRECORD_H

@class NSData, NSURL;

#import <Foundation/Foundation.h>


@interface _WBSFaviconRecord : NSObject

@property (readonly, copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, nonatomic) NSURL *originalPageURL; // ivar: _originalPageURL
@property (readonly, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)new;
-(id)init;
-(id)initWithPageURL:(id)arg0 originalPageURL:(id)arg1 iconURL:(id)arg2 iconData:(id)arg3 size:(struct CGSize )arg4 isPrivate:(BOOL)arg5 ;


@end


#endif