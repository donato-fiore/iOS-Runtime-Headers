// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSALERTARTICLEUNAVAILABLE_H
#define TSALERTARTICLEUNAVAILABLE_H

@class NSString;
@protocol TSAlertable;

#import <Foundation/Foundation.h>


@interface TSAlertArticleUnavailable : NSObject <TSAlertable>

 {
    ? alert;
}


@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;


-(id)init;
-(id)initWithBlockedReason:(NSUInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif