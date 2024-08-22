// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDREPAIRAPPLICATIONREQUEST_H
#define ASDREPAIRAPPLICATIONREQUEST_H


#import <Foundation/Foundation.h>

#import "ASDRepairOptions.h"

@interface ASDRepairApplicationRequest : NSObject {
    ASDRepairOptions *_options;
}




-(id)initWithOptions:(id)arg0 ;
-(void)sendRequestWithCompletionBlock:(id)arg0 ;


@end


#endif