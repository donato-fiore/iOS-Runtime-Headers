// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMLINK_H
#define SUITEMLINK_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUItemLink : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *URL; // ivar: _url
@property (nonatomic) NSInteger linkTarget; // ivar: _linkTarget
@property (nonatomic) NSInteger linkType; // ivar: _linkType
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif