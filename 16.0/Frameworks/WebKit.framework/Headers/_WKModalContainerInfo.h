// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKMODALCONTAINERINFO_H
#define _WKMODALCONTAINERINFO_H


#import <Foundation/Foundation.h>


@interface _WKModalContainerInfo : NSObject

@property (readonly, nonatomic) NSUInteger availableTypes; // ivar: _availableTypes


-(id)initWithTypes:(struct OptionSet<WebCore::ModalContainerControlType> )arg0 ;


@end


#endif