// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISOPENURLREQUEST_H
#define ISOPENURLREQUEST_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ISOpenURLRequest : NSObject <NSCopying>



@property (nonatomic, getter=isITunesStoreURL) BOOL ITunesStoreURL; // ivar: _isITunesStoreURL
@property (retain, nonatomic) NSURL *URL; // ivar: _url
@property (copy, nonatomic) NSString *URLBagKey; // ivar: _urlBagKey
@property (nonatomic) BOOL interruptsKeybagRefresh; // ivar: _interruptsKeybagRefresh
@property (copy, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier


+(id)openURLRequestWithURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLBagKey:(id)arg0 ;


@end


#endif