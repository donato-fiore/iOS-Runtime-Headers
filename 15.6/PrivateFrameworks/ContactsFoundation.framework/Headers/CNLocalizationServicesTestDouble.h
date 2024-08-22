// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNLOCALIZATIONSERVICESTESTDOUBLE_H
#define CNLOCALIZATIONSERVICESTESTDOUBLE_H

@class NSMutableDictionary, NSString;
@protocol CNLocalizationServices;

#import <Foundation/Foundation.h>


@interface CNLocalizationServicesTestDouble : NSObject <CNLocalizationServices>

 {
    NSMutableDictionary *_values;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)storageKeyForKey:(id)arg0 table:(id)arg1 inBundleForClass:(Class)arg2 ;
-(id)init;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 bundleForClass:(Class)arg3 comment:(id)arg4 ;
-(void)givenLocalizedString:(id)arg0 forKey:(id)arg1 table:(id)arg2 bundleForClass:(Class)arg3 ;


@end


#endif