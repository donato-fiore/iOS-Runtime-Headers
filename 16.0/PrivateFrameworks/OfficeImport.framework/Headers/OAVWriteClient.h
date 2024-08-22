// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAVWRITECLIENT_H
#define OAVWRITECLIENT_H


#import <Foundation/Foundation.h>


@interface OAVWriteClient : NSObject



-(id)textWrapPointsForDrawable:(id)arg0 state:(id)arg1 ;
-(void)updateClientAnchorFromOrientedBoundsForDrawable:(id)arg0 state:(id)arg1 ;
-(void)writeClientDataFromDrawable:(id)arg0 toStyle:(id)arg1 state:(id)arg2 ;
-(void)writeClientDataFromDrawable:(id)arg0 toXmlWriter:(id)arg1 state:(id)arg2 ;


@end


#endif