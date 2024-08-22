// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SLEXTENSIONLAZYMATCHER_H
#define _SLEXTENSIONLAZYMATCHER_H

@class NSString, NSExtension;

#import <Foundation/Foundation.h>


@interface _SLExtensionLazyMatcher : NSObject {
    NSString *_identifier;
    NSExtension *_extension;
}


@property (readonly, nonatomic) NSExtension *extension;


-(id)initWithIdentifier:(id)arg0 ;


@end


#endif