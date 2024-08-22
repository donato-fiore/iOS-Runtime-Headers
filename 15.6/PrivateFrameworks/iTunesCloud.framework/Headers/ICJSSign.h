// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICJSSIGN_H
#define ICJSSIGN_H


#import <Foundation/Foundation.h>

#import "ICJSSignConfiguration.h"

@interface ICJSSign : NSObject {
    ICJSSignConfiguration *_configuration;
}




-(id)initWithConfiguration:(id)arg0 ;
-(id)signatureDataWithURLRequest:(id)arg0 ;
-(id)signatureStringWithURLRequest:(id)arg0 ;


@end


#endif