// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESMEDIALOOKUPTASK_H
#define LPITUNESMEDIALOOKUPTASK_H

@class AMSLookup, NSArray, NSString;



@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray *_identifiers;
    NSArray *_bundleIdentifiers;
    NSString *_storefrontCountryCode;
}




-(id)_compileQueryParametersWithBundleIds:(id)arg0 itemIds:(id)arg1 ;
-(id)callerID;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 storefrontCountryCode:(id)arg1 ;
-(id)sharedBag;
-(void)start:(id)arg0 ;


@end


#endif