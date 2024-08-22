// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPHONENUMBERRESOLVER_H
#define GEOPHONENUMBERRESOLVER_H

@class PNRPhoneNumberResolver;

#import <Foundation/Foundation.h>


@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver *_resolver;
}




+(id)sharedResolver;
-(id)init;
// -(void)resolvePhoneNumbers:(id)arg0 handler:(id)arg1 queue:(unk)arg2  ;


@end


#endif