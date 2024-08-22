// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCALENDAREVENTACTIONSERIALIZER_H
#define SXCALENDAREVENTACTIONSERIALIZER_H

@class NSString;
@protocol SXActionSerializer;

#import <Foundation/Foundation.h>


@interface SXCalendarEventActionSerializer : NSObject <SXActionSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)URLForAction:(id)arg0 type:(NSInteger)arg1 ;
-(id)queryItemForName:(id)arg0 value:(id)arg1 ;


@end


#endif