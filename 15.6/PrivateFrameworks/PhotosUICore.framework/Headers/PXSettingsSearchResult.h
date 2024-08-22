// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSETTINGSSEARCHRESULT_H
#define PXSETTINGSSEARCHRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_PXSettingsIndexEntry.h"

@interface PXSettingsSearchResult : NSObject

@property (readonly, nonatomic) _PXSettingsIndexEntry *entry; // ivar: _entry
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;


-(id)_initWithEntry:(id)arg0 ;
-(id)init;
-(void)revealInSettingsController:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif