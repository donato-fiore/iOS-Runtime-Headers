// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSAUTOPLAYQUIRKWHITELISTSNAPSHOT_H
#define WBSAUTOPLAYQUIRKWHITELISTSNAPSHOT_H

@class NSDictionary, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot>

 {
    NSDictionary *_domainsToQuirkTypes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)quirkTypeForDomain:(id)arg0 ;
-(id)init;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;


@end


#endif