// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECREMOTECONTENTWEBVIEWOBSERVER_H
#define ECREMOTECONTENTWEBVIEWOBSERVER_H

@class NSString;
@protocol ECRemoteContentWebViewObserver;

#import <Foundation/Foundation.h>

#import "ECRemoteContentParser.h"

@interface ECRemoteContentWebViewObserver : NSObject <ECRemoteContentWebViewObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ECRemoteContentParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(id)initWithParser:(id)arg0 ;
-(void)baseURL:(id)arg0 didRequestRemoteContentURLs:(id)arg1 ;


@end


#endif