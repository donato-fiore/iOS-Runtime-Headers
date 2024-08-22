// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTENTEREVENTHANDLER_H
#define MTENTEREVENTHANDLER_H

@protocol MTEnterEventHandlerDelegate;


#import "MTStandardEventHandler.h"

@interface MTEnterEventHandler : MTStandardEventHandler

@property (weak, nonatomic) NSObject<MTEnterEventHandlerDelegate> *delegate;


-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)osLanguages:(id)arg0 ;


@end


#endif