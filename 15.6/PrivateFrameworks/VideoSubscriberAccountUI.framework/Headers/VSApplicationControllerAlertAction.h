// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAPPLICATIONCONTROLLERALERTACTION_H
#define VSAPPLICATIONCONTROLLERALERTACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSApplicationControllerAlertAction : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(NSInteger)styleFromString:(id)arg0 ;


@end


#endif