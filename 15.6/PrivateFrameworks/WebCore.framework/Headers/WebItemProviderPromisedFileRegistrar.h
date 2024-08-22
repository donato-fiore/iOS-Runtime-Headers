// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBITEMPROVIDERPROMISEDFILEREGISTRAR_H
#define WEBITEMPROVIDERPROMISEDFILEREGISTRAR_H

@class NSData, NSString;
@protocol WebItemProviderRegistrar, NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar>

 {
    RetainPtr<NSString> _typeIdentifier;
    BlockPtr<void (void (^)(NSURL *, NSError *))> _callback;
}


@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSItemProviderWriting> *representingObjectForClient;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;


-(id)initWithType:(id)arg0 callback:(id)arg1 ;
-(void)registerItemProvider:(id)arg0 ;


@end


#endif