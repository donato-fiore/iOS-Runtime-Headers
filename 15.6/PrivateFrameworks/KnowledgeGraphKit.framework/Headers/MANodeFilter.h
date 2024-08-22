// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANODEFILTER_H
#define MANODEFILTER_H



#import "MAElementFilter.h"
#import "KGNodeFilter.h"
#import "MARelation.h"

@interface MANodeFilter : MAElementFilter

@property (readonly, nonatomic) KGNodeFilter *kgNodeFilter;
@property (readonly, nonatomic) MARelation *relation;


+(BOOL)scanInstance:(*id)arg0 withScanner:(id)arg1 ;
+(id)nodeFilterWithVisualString:(id)arg0 ;
-(BOOL)matchesNode:(id)arg0 ;
-(void)appendVisualStringToString:(id)arg0 ;


@end


#endif