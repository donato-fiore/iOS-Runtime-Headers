// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHCONFIGURATIONBAG_H
#define WBSPASSWORDBREACHCONFIGURATIONBAG_H

@class NSDictionary, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachConfigurationBag : NSObject <WBSRemotePlistSnapshot>

 {
    NSDictionary *_bag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstConfigurationForSupportedProtocolVersion:(NSUInteger)arg0 rampIdentifier:(NSUInteger)arg1 allowValuesForTesting:(BOOL)arg2 ;
-(id)initWithBagDictionary:(id)arg0 ;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;


@end


#endif