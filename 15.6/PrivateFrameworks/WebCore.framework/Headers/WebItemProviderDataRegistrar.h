// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBITEMPROVIDERDATAREGISTRAR_H
#define WEBITEMPROVIDERDATAREGISTRAR_H

@class NSData, NSString;
@protocol WebItemProviderRegistrar, NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar>

 {
    RetainPtr<NSString> _typeIdentifier;
    RetainPtr<NSData> _data;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSItemProviderWriting> *representingObjectForClient;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;


-(id)initWithData:(id)arg0 type:(id)arg1 ;
-(void)registerItemProvider:(id)arg0 ;


@end


#endif