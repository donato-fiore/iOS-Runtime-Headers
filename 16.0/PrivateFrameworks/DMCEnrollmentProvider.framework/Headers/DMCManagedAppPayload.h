// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCMANAGEDAPPPAYLOAD_H
#define DMCMANAGEDAPPPAYLOAD_H

@class MCPayload, NSString;



@interface DMCManagedAppPayload : MCPayload

@property (retain, nonatomic) NSString *managedAppID; // ivar: _managedAppID


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithManagedAppID:(id)arg0 profile:(id)arg1 ;
-(id)title;


@end


#endif