// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOMPANIONSYNCSERIALIZER_H
#define MTCOMPANIONSYNCSERIALIZER_H

@class NSString;
@protocol SYChangeSerializer;

#import <Foundation/Foundation.h>


@interface MTCompanionSyncSerializer : NSObject <SYChangeSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeFromData:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)dataFromChange:(id)arg0 ;


@end


#endif