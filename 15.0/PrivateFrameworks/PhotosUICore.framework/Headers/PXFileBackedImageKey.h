// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILEBACKEDIMAGEKEY_H
#define PXFILEBACKEDIMAGEKEY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PXFileBackedImageKey : NSObject

@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithUrl:(id)arg0 size:(struct CGSize )arg1 ;


@end


#endif