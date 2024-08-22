// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSUSERAGENTQUIRKSSNAPSHOT_H
#define WBSUSERAGENTQUIRKSSNAPSHOT_H

@class NSDictionary, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>

 {
    NSDictionary *_domainsToQuirkTypes;
    NSDictionary *_userAgentQuirks;
    NSDictionary *_sitesRequiringUserAgentQuirks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;
-(id)quirkTypeForDomain:(id)arg0 ;


@end


#endif