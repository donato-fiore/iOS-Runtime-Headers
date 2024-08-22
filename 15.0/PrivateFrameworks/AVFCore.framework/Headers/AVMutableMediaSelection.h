// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMUTABLEMEDIASELECTION_H
#define AVMUTABLEMEDIASELECTION_H



#import "AVMediaSelection.h"

@interface AVMutableMediaSelection : AVMediaSelection



-(BOOL)_isValidMediaSelectionOption:(id)arg0 forMediaSelectionGroup:(id)arg1 ;
-(id)_validatedGroupIdentifierKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)selectMediaOption:(id)arg0 inMediaSelectionGroup:(id)arg1 ;


@end


#endif