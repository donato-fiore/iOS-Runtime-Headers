// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDCOPYACTION_H
#define DDCOPYACTION_H

@class NSString;


#import "DDAction.h"

@interface DDCopyAction : DDAction {
    NSString *_query;
    NSInteger _dataOwner;
}




+(BOOL)actionAvailableForContact:(id)arg0 ;
-(?)initWithURL:(?)arg0 resultcontext;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(id)iconName;
-(id)initWithQueryString:(id)arg0 range:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)localizedName;
-(void)_copyStringOnly:(id)arg0 ;
-(void)_copyURL:(id)arg0 ;
-(void)performFromView:(id)arg0 ;


@end


#endif