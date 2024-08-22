// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEXTENSIONENUMERATOR_H
#define WFEXTENSIONENUMERATOR_H

@class NSSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFExtensionEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _lsToken;
    int _pkToken;
    NSSet *_supportedIdentifiers;
}


@property (readonly, nonatomic) NSString *extensionPointIdentifier; // ivar: _extensionPointIdentifier
@property (readonly, nonatomic) NSSet *supportedIdentifiers;


-(id)initWithExtensionPointIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)enumerateExtensions;


@end


#endif