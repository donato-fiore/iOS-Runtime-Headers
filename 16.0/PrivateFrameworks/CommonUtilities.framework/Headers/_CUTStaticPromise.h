// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUTSTATICPROMISE_H
#define _CUTSTATICPROMISE_H



#import "CUTPromise.h"
#import "CUTResult.h"

@interface _CUTStaticPromise : CUTPromise {
    BOOL _safe;
}


@property (retain, nonatomic) CUTResult *result; // ivar: _result


-(id)initWithResult:(id)arg0 safe:(BOOL)arg1 ;
-(id)then:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif