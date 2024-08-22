// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUWEBSCRIPTRELOADCONTEXT_H
#define SUWEBSCRIPTRELOADCONTEXT_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUWebScriptReloadContext : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSURL *referrerURL; // ivar: _referrerURL
@property (copy, nonatomic) NSString *referringUserAgent; // ivar: _referringUserAgent


-(id)_copyScriptDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif