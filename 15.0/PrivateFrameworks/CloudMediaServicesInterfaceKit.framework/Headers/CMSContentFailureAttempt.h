// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSCONTENTFAILUREATTEMPT_H
#define CMSCONTENTFAILUREATTEMPT_H

@class NSString, NSDate;
@protocol CMSCoding;

#import <Foundation/Foundation.h>


@interface CMSContentFailureAttempt : NSObject <CMSCoding>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger failure; // ivar: _failure
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)cmsCoded;
-(id)initWithFailure:(NSUInteger)arg0 ;


@end


#endif