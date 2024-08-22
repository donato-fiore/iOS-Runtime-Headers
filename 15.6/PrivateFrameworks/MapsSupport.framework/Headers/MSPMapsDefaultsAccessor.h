// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMAPSDEFAULTSACCESSOR_H
#define MSPMAPSDEFAULTSACCESSOR_H

@class NSString;
@protocol GEOKeyBagProtectedDataDidBecomeAvailableObserver;

#import <Foundation/Foundation.h>


@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

 {
    BOOL _protectedDataAvailable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)get:(id)arg0 ;
+(id)sharedInstance;
+(void)set:(id)arg0 value:(id)arg1 ;
+(void)synchronize;
-(id)_get:(id)arg0 ;
-(id)init;
-(void)_set:(id)arg0 value:(id)arg1 ;
-(void)_synchronize;
-(void)protectedDataDidBecomeAvailable:(id)arg0 ;


@end


#endif