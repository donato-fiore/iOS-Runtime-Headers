// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUSERACTIVITY_H
#define CLKUSERACTIVITY_H

@class NSUserActivity, NSString;

#import <Foundation/Foundation.h>


@interface CLKUserActivity : NSObject {
    NSUserActivity *_userActivity;
    NSString *_encodedUserActivity;
}


@property (readonly, nonatomic) NSString *encodedUserActivity;
@property (readonly, nonatomic) NSUserActivity *userActivity;


-(id)initWithEncodedUserActivity:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;


@end


#endif