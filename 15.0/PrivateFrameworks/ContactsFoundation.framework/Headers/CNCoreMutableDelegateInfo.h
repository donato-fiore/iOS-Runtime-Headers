// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOREMUTABLEDELEGATEINFO_H
#define CNCOREMUTABLEDELEGATEINFO_H

@class NSString, NSNumber, NSPersonNameComponents;


#import "CNCoreDelegateInfo.h"

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSNumber *dsid;
@property (nonatomic) BOOL isMe;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *principalPath;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif