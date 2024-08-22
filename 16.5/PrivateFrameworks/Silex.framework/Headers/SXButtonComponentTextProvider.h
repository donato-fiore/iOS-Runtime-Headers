// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXBUTTONCOMPONENTTEXTPROVIDER_H
#define SXBUTTONCOMPONENTTEXTPROVIDER_H

@class NSString;
@protocol SXButtonComponentTextProvider;

#import <Foundation/Foundation.h>


@interface SXButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)textForComponent:(id)arg0 ;


@end


#endif