// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRSWITCHRECORDCOLLECTION_H
#define NRSWITCHRECORDCOLLECTION_H

@protocol NSSecureCoding;


#import "NRPBSwitchRecordCollection.h"

@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg0 ;
-(void)truncateSwitchRecords;


@end


#endif