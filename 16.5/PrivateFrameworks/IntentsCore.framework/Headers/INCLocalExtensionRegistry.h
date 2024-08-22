// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCLOCALEXTENSIONREGISTRY_H
#define INCLOCALEXTENSIONREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}




+(id)sharedInstance;
-(id)init;
-(id)localExtensionForIdentifier:(id)arg0 ;
-(id)localExtensions;
-(void)deregisterLocalExtension:(id)arg0 ;
-(void)registerLocalExtension:(id)arg0 ;


@end


#endif