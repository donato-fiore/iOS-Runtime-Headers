// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCONTINUITYDISPLAYITEM_H
#define SBCONTINUITYDISPLAYITEM_H



#import "SBDisplayItem.h"
#import "SBBestAppSuggestion.h"

@interface SBContinuityDisplayItem : SBDisplayItem

@property (readonly, nonatomic) SBBestAppSuggestion *appSuggestion; // ivar: _appSuggestion


+(id)continuityAppDisplayItemWithBundleIdentifier:(id)arg0 appSuggestion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSInteger)arg0 displayIdentifier:(id)arg1 appSuggestion:(id)arg2 ;


@end


#endif