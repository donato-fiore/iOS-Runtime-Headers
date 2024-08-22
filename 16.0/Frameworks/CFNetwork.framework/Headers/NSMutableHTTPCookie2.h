// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMUTABLEHTTPCOOKIE2_H
#define NSMUTABLEHTTPCOOKIE2_H

@class NSString, NSDate;


#import "NSHTTPCookie2.h"

@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString *domain;
@property (retain) NSDate *expirationDate;
@property BOOL hostOnly;
@property BOOL httpOnly;
@property (retain) NSString *name;
@property (retain) NSString *partition;
@property (retain) NSString *path;
@property NSInteger sameSite;
@property BOOL secure;
@property NSInteger source;
@property (retain) NSString *value;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 domain:(id)arg2 ;


@end


#endif