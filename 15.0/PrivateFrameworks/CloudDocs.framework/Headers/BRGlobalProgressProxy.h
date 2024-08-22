// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRGLOBALPROGRESSPROXY_H
#define BRGLOBALPROGRESSPROXY_H

@class NSString;
@protocol BRProgressProxyDelegate;


#import "BRProgressProxy.h"

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate>

 {
    NSString *_kind;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)progressProxy:(id)arg0 shouldProxyProgress:(id)arg1 ;
-(id)initWithGlobalProgressKind:(id)arg0 ;
-(id)progressProxy:(id)arg0 localizedDescriptionForProgress:(id)arg1 ;


@end


#endif