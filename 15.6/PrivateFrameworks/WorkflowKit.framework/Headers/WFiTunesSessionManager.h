// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFITUNESSESSIONMANAGER_H
#define WFITUNESSESSIONMANAGER_H

@class NSURL, NSURLSession;

#import <Foundation/Foundation.h>


@interface WFiTunesSessionManager : NSObject

@property (readonly, copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)getMediaWithURL:(id)arg0 completion:(id)arg1 ;
-(void)lookupMediaWithBundleIdentifier:(id)arg0 countryCode:(id)arg1 completion:(id)arg2 ;
-(void)lookupMediaWithISBN:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)lookupMediaWithIdentifiers:(id)arg0 countryCode:(id)arg1 completion:(id)arg2 ;
-(void)lookupMediaWithUPC:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)searchForMediaOfType:(id)arg0 limitedToEntityType:(id)arg1 withTerm:(id)arg2 forAttribute:(id)arg3 countryCode:(id)arg4 limit:(NSUInteger)arg5 completion:(id)arg6 ;


@end


#endif