// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCONTACTSDATAPROVIDERAPPLECAREHANDLES_H
#define TUCONTACTSDATAPROVIDERAPPLECAREHANDLES_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles; // ivar: _appleCareHandles


-(BOOL)contains:(id)arg0 ;
-(id)init;
-(void)loadHandles;


@end


#endif