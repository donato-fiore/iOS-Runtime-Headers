// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTRADIOACCESSTECHNOLOGY_H
#define CTRADIOACCESSTECHNOLOGY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CTTelephonyNetworkInfo.h"

@interface CTRadioAccessTechnology : NSObject {
    CTTelephonyNetworkInfo *_networkInfo;
}


@property (readonly) NSString *radioAccessTechnology;


-(id)init;
-(id)initWithCTTelephonyNetworkInfo:(id)arg0 ;


@end


#endif