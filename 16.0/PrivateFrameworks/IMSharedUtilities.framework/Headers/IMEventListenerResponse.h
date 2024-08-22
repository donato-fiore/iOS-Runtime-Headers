// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEVENTLISTENERRESPONSE_H
#define IMEVENTLISTENERRESPONSE_H

@class NSString, NSError, NSDictionary;
@protocol IMEventListenerResponse;

#import <Foundation/Foundation.h>


@interface IMEventListenerResponse : NSObject <IMEventListenerResponse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=didSucceed) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithSuccess:(BOOL)arg0 userInfo:(id)arg1 error:(id)arg2 ;


@end


#endif