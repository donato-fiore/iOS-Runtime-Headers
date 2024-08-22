// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSDOMAINWHITELISTSNAPSHOT_H
#define WBSDOMAINWHITELISTSNAPSHOT_H

@class NSSet, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSDomainWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot>

 {
    NSSet *_whitelistedDomains;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDomainWhitelisted:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDomains:(id)arg0 ;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;


@end


#endif