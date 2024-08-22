// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPRESPONSECONSUMER_H
#define MFIMAPRESPONSECONSUMER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFIMAPResponseConsumer : NSObject {
    NSMutableDictionary *_consumersBySection;
}




-(id)consumersBySection;
-(void)addConsumer:(id)arg0 forSection:(id)arg1 ;
-(void)appendData:(id)arg0 forSection:(id)arg1 ;
-(void)dealloc;
-(void)done;


@end


#endif