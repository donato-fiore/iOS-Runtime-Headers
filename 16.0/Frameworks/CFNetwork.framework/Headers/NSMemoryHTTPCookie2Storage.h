// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMEMORYHTTPCOOKIE2STORAGE_H
#define NSMEMORYHTTPCOOKIE2STORAGE_H

@class NSMutableDictionary, NSString;
@protocol NSInternalHTTPCookie2Storage;

#import <Foundation/Foundation.h>


@interface NSMemoryHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage>

 {
    NSMutableDictionary *memoryCookies;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getAllCookies;
-(id)getCookiesWithFilter:(id)arg0 ;
-(id)init;
-(void)deleteAllCookies;
-(void)deleteCookie:(id)arg0 ;
-(void)deleteCookies:(id)arg0 ;
-(void)deleteCookiesWithFilter:(id)arg0 ;
-(void)setCookie:(id)arg0 ;
-(void)setCookies:(id)arg0 ;


@end


#endif