// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICERESULTQUERY_H
#define ICERESULTQUERY_H


#import <Foundation/Foundation.h>


@interface ICEResultQuery : NSObject {
    *tagCONNRESULT result;
}


@property unsigned int callID; // ivar: callID
@property BOOL isQueryAnswered; // ivar: isQueryAnswered
@property *tagCONNRESULT result;


-(id)initWithCallID:(unsigned int)arg0 ;
-(id)initWithResult:(struct tagCONNRESULT *)arg0 ;
-(void)dealloc;


@end


#endif