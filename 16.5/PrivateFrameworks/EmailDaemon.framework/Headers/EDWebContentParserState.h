// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDWEBCONTENTPARSERSTATE_H
#define EDWEBCONTENTPARSERSTATE_H

@class NSURL, EFPromise;

#import <Foundation/Foundation.h>


@interface EDWebContentParserState : NSObject

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) EFPromise *dataDetectionPromise; // ivar: _dataDetectionPromise
@property (retain, nonatomic) EFPromise *remoteContentPromise; // ivar: _remoteContentPromise
@property (retain, nonatomic) EFPromise *richLinkPromise; // ivar: _richLinkPromise




@end


#endif