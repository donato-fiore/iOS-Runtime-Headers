// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTACCOUNTEVENTHANDLER_H
#define MTACCOUNTEVENTHANDLER_H

@protocol MTAccountEventHandlerDelegate;


#import "MTStandardEventHandler.h"

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak, nonatomic) NSObject<MTAccountEventHandlerDelegate> *delegate;


-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)type:(id)arg0 ;


@end


#endif