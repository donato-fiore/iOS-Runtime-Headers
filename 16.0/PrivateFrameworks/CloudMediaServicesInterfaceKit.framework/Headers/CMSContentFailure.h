// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSCONTENTFAILURE_H
#define CMSCONTENTFAILURE_H

@class NSURL, NSString, NSError;
@protocol CMSCoding;

#import <Foundation/Foundation.h>


@interface CMSContentFailure : NSObject <CMSCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cmsCoded;
-(id)initWithError:(id)arg0 ;
-(id)initWithError:(id)arg0 url:(id)arg1 ;
-(id)initWithServiceError:(id)arg0 url:(id)arg1 ;


@end


#endif