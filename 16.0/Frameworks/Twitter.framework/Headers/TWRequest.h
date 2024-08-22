// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TWREQUEST_H
#define TWREQUEST_H

@class NSURL, ACAccount, NSDictionary;

#import <Foundation/Foundation.h>


@interface TWRequest : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSInteger requestMethod;


-(id)initWithURL:(id)arg0 parameters:(id)arg1 requestMethod:(NSInteger)arg2 ;
-(void)addMultiPartData:(id)arg0 withName:(id)arg1 type:(id)arg2 ;
-(void)dealloc;
-(void)performRequestWithHandler:(id)arg0 ;


@end


#endif