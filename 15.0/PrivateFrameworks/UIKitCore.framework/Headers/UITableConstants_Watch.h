// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLECONSTANTS_WATCH_H
#define UITABLECONSTANTS_WATCH_H

@class Phone;



@interface UITableConstants_Watch : Phone



+(id)sharedConstants;
-(BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(NSInteger)arg0 ;
-(id)defaultCheckmarkImageForCell:(id)arg0 ;
-(struct _UITableConstantsBackgroundProperties )defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(NSInteger)arg0 tableBackgroundColor:(id)arg1 floating:(BOOL)arg2 ;


@end


#endif