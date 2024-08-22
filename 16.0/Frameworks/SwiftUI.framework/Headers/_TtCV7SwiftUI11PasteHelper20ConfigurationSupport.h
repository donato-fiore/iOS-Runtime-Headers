// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV7SWIFTUI11PASTEHELPER20CONFIGURATIONSUPPORT_H
#define _TTCV7SWIFTUI11PASTEHELPER20CONFIGURATIONSUPPORT_H

@class UIPasteConfiguration;
@protocol UIPasteConfigurationSupporting;

#import <Foundation/Foundation.h>


@interface _TtCV7SwiftUI11PasteHelper20ConfigurationSupport : NSObject <UIPasteConfigurationSupporting>

 {
    ? pasteHelper;
}


@property (nonatomic, retain) UIPasteConfiguration *pasteConfiguration; // ivar: pasteConfiguration


-(BOOL)canPasteItemProviders:(id)arg0 ;
-(id)init;
-(void)pasteItemProviders:(id)arg0 ;


@end


#endif