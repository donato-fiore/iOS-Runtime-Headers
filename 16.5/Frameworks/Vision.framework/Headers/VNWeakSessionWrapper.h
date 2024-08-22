// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNWEAKSESSIONWRAPPER_H
#define VNWEAKSESSIONWRAPPER_H


#import <Foundation/Foundation.h>

#import "VNSession.h"

@interface VNWeakSessionWrapper : NSObject {
    VNSession *_weakSession;
}




-(id)description;
-(id)initWithSession:(id)arg0 ;
-(id)sessionAndReturnError:(*id)arg0 ;


@end


#endif