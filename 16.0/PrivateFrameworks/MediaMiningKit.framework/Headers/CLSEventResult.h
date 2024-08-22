// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEVENTRESULT_H
#define CLSEVENTRESULT_H


#import <Foundation/Foundation.h>

#import "CLSEvent.h"

@interface CLSEventResult : NSObject

@property (nonatomic) float confidence; // ivar: _confidence
@property (retain, nonatomic) CLSEvent *event; // ivar: _event


+(id)eventResultWithEvent:(id)arg0 andConfidence:(float)arg1 ;
-(BOOL)isSameEventAsResult:(id)arg0 ;
-(id)description;
-(void)mergeWithResult:(id)arg0 ;


@end


#endif