// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMUTABLESAVERESPONSE_H
#define CNMUTABLESAVERESPONSE_H



#import "CNSaveResponse.h"

@interface CNMutableSaveResponse : CNSaveResponse

@property BOOL didAffectMeCard;


+(BOOL)supportsSecureCoding;
-(void)setContactSnapshot:(id)arg0 forIndexPath:(id)arg1 ;
-(void)setContainerSnapshot:(id)arg0 forIndexPath:(id)arg1 ;
-(void)setGroupSnapshot:(id)arg0 forIndexPath:(id)arg1 ;


@end


#endif