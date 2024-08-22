// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSCONTENTFAILURE_H
#define CMSCONTENTFAILURE_H

@class NSMutableArray, NSURL, NSArray, NSString;
@protocol CMSCoding;

#import <Foundation/Foundation.h>


@interface CMSContentFailure : NSObject <CMSCoding>

 {
    NSMutableArray *_attempts;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSArray *attempts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *redirectedURL; // ivar: _redirectedURL
@property (readonly) Class superclass;


-(id)cmsCoded;
-(id)initWithFailure:(NSUInteger)arg0 URL:(id)arg1 redirectedURL:(id)arg2 result:(id)arg3 body:(id)arg4 ;
-(void)retriedWithFailure:(NSUInteger)arg0 result:(id)arg1 body:(id)arg2 ;


@end


#endif