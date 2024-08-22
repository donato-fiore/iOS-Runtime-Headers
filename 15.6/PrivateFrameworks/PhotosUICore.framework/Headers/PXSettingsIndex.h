// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSETTINGSINDEX_H
#define PXSETTINGSINDEX_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXSettingsIndex : NSObject

@property (readonly, nonatomic) NSArray *entries; // ivar: _entries


+(id)_entriesForSettingsController:(id)arg0 usingProgress:(id)arg1 ;
+(id)createIndexForSettings:(id)arg0 resultHandler:(id)arg1 ;
-(id)_initWithEntries:(id)arg0 ;
-(id)init;
-(id)searchForText:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif