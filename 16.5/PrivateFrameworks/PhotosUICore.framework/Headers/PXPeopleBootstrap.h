// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEBOOTSTRAP_H
#define PXPEOPLEBOOTSTRAP_H


#import <Foundation/Foundation.h>


@interface PXPeopleBootstrap : NSObject



+(BOOL)_namePerson:(id)arg0 toContact:(id)arg1 changeRequest:(id)arg2 context:(id)arg3 ;
+(struct CGSize )preferredBootstrapSize;
+(void)_addToPeopleAlbumWithChangeRequest:(id)arg0 ;
+(void)_favoritePersonWithChangeRequest:(id)arg0 ;
+(void)_mergePerson:(id)arg0 context:(id)arg1 toPerson:(id)arg2 ;
+(void)_namePerson:(id)arg0 context:(id)arg1 withChangeRequest:(id)arg2 ;
+(void)_namePerson:(id)arg0 toContact:(id)arg1 withChangeRequest:(id)arg2 ;
+(void)_namePerson:(id)arg0 toString:(id)arg1 withChangeRequest:(id)arg2 ;
+(void)_unfavoritePersonWithChangeRequest:(id)arg0 ;
+(void)nameAndVerifyPerson:(id)arg0 toContact:(id)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(void)performBootstrapWithSourcePerson:(id)arg0 context:(id)arg1 synchronous:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif