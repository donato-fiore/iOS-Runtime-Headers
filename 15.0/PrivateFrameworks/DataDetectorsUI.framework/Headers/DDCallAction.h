// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDCALLACTION_H
#define DDCALLACTION_H



#import "DDTelephoneNumberAction.h"

@interface DDCallAction : DDTelephoneNumberAction



+(BOOL)isAvailable;
+(id)callProvider;
-(BOOL)_titleFitsInActionSheet:(id)arg0 ;
-(BOOL)canBePerformedByOpeningURL;
-(BOOL)isEmail;
-(CGFloat)_systemFontSize;
-(NSInteger)TTYType;
-(id)dialRequest;
-(id)dialRequestWithProvider:(id)arg0 ;
-(id)localizedCallStringForName:(id)arg0 usingCallRelay:(BOOL)arg1 ;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationTitleTargetString;
-(id)notificationURL;
-(id)subtitle;
-(int)interactionType;
-(void)performFromView:(id)arg0 ;


@end


#endif