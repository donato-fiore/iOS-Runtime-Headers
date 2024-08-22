// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCORESPOTLIGHTCONTACTSUPDATER_H
#define SPCORESPOTLIGHTCONTACTSUPDATER_H


#import <Foundation/Foundation.h>


@interface SPCoreSpotlightContactsUpdater : NSObject



+(id)sharedInstance;
-(id)init;
-(id)updatedCountsFromExisting:(id)arg0 result:(*NSInteger)arg1 shouldUpdateMonth:(BOOL)arg2 ;
-(void)updateContactCounts:(id)arg0 ;


@end


#endif