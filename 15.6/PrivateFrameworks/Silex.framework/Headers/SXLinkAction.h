// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLINKACTION_H
#define SXLINKACTION_H

@class NSURL, NSString;
@protocol SXLinkAction;

#import <Foundation/Foundation.h>

#import "SXJSONDictionary.h"

@interface SXLinkAction : NSObject <SXLinkAction>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: _analytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 analytics:(id)arg1 ;


@end


#endif