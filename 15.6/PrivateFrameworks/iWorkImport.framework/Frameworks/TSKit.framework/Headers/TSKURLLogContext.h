// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKURLLOGCONTEXT_H
#define TSKURLLOGCONTEXT_H

@class NSURL, NSString;
@protocol TSULogContext;

#import <Foundation/Foundation.h>


@interface TSKURLLogContext : NSObject <TSULogContext>

 {
    NSURL *_url;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;


+(id)logContextWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif