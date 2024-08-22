// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTMESSAGEREADATTRIBUTESANITIZER_H
#define IMASSISTANTMESSAGEREADATTRIBUTESANITIZER_H

@class NSString;
@protocol IMAssistantMessageAttributeSanitizer;

#import <Foundation/Foundation.h>


@interface IMAssistantMessageReadAttributeSanitizer : NSObject <IMAssistantMessageAttributeSanitizer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)sanitize:(NSUInteger)arg0 ;


@end


#endif