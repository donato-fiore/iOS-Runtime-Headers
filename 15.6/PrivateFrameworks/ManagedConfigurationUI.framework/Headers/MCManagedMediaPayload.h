// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMANAGEDMEDIAPAYLOAD_H
#define MCMANAGEDMEDIAPAYLOAD_H

@class MCPayload, MCBook;



@interface MCManagedMediaPayload : MCPayload

@property (retain, nonatomic) MCBook *managedBook; // ivar: _managedBook


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithManagedMedia:(id)arg0 profile:(id)arg1 ;
-(id)title;


@end


#endif