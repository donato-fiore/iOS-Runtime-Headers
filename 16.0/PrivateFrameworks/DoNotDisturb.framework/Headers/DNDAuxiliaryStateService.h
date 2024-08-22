// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDAUXILIARYSTATESERVICE_H
#define DNDAUXILIARYSTATESERVICE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDAuxiliaryStateService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}




+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)setScreenIsShared:(BOOL)arg0 screenIsMirrored:(BOOL)arg1 error:(*id)arg2 ;
-(id)_initWithClientIdentifier:(id)arg0 ;


@end


#endif