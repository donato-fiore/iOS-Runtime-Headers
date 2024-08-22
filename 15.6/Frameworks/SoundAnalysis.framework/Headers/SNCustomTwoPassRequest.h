// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNCUSTOMTWOPASSREQUEST_H
#define SNCUSTOMTWOPASSREQUEST_H

@class NSString;
@protocol SNTwoPassRequest;

#import <Foundation/Foundation.h>

#import "SNTwoPassConfiguration.h"

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest>

 {
    id *_createSecondPassControllerFunction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) SNTwoPassConfiguration *twoPassConfiguration; // ivar: _twoPassConfiguration


-(id)createSecondPassController;
-(id)initWithTwoPassConfiguration:(id)arg0 createSecondPassControllerFunction:(id)arg1 ;


@end


#endif