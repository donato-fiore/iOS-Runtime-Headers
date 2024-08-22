// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBPAGESTATUSBARINFOMESSAGE_H
#define SFWEBPAGESTATUSBARINFOMESSAGE_H

@class NSString, NSAttributedString;
@protocol SFWebPageStatusBarMessage;

#import <Foundation/Foundation.h>


@interface SFWebpageStatusBarInfoMessage : NSObject <SFWebPageStatusBarMessage>

 {
    NSString *_message;
}


@property (readonly, nonatomic) NSAttributedString *attributedMessageString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;


@end


#endif