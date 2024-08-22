// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMANAGEDAPPPAYLOAD_H
#define MCMANAGEDAPPPAYLOAD_H

@class MCPayload, NSString;



@interface MCManagedAppPayload : MCPayload

@property (retain, nonatomic) NSString *managedAppID; // ivar: _managedAppID


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithManagedAppID:(id)arg0 profile:(id)arg1 ;
-(id)title;


@end


#endif