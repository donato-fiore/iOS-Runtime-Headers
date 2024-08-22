// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGKPODVIEW_H
#define SAGKPODVIEW_H

@class NSString;


#import "SAAceView.h"

@interface SAGKPodView : SAAceView

@property (copy, nonatomic) NSString *title;


+(id)podView;
+(id)podViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif