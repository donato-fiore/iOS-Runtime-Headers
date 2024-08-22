// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSIRICONTACTCONTEXTPROVIDER_H
#define CNSIRICONTACTCONTEXTPROVIDER_H

@class CNContact, CNContactStore;
@protocol AFContextProvider;

#import <Foundation/Foundation.h>


@interface CNSiriContactContextProvider : NSObject <AFContextProvider>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (retain, nonatomic) CNContactStore *store; // ivar: _store


+(id)descriptorForRequiredKeys;
-(BOOL)allowContextProvider:(id)arg0 ;
-(id)defaultContextManager;
-(id)getCurrentContext;
-(id)initWithContact:(id)arg0 store:(id)arg1 ;
-(void)_removeContextProviderOnMainThread;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif