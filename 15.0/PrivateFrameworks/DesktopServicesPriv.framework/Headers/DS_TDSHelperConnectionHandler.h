// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DS_TDSHELPERCONNECTIONHANDLER_H
#define DS_TDSHELPERCONNECTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface DS_TDSHelperConnectionHandler : NSObject {
    *void _helper;
    TDSMutex _mutex;
}




-(id)initWithHelper:(*void)arg0 ;
-(void)clearHelper;
-(void)handleHelperEvent:(id)arg0 ;


@end


#endif