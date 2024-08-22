// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAMIMAGE_H
#define IAMIMAGE_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IAMImage : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int height; // ivar: _height
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) unsigned int width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithICImage:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 url:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 url:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 ;


@end


#endif