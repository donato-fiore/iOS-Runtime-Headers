// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMMAILTOURLCOMPONENTS_H
#define EMMAILTOURLCOMPONENTS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface EMMailToURLComponents : NSObject

@property (readonly, nonatomic) NSArray *bccRecipients; // ivar: _bccRecipients
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSArray *ccRecipients; // ivar: _ccRecipients
@property (readonly, nonatomic) NSString *subject; // ivar: _subject
@property (readonly, nonatomic) NSArray *toRecipients; // ivar: _toRecipients


+(id)componentsWithURL:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)_decomposeURL:(id)arg0 ;


@end


#endif