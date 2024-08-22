// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYRECORDSETORIGINALINPUT_H
#define TITYPOLOGYRECORDSETORIGINALINPUT_H

@class NSString;


#import "TITypologyRecord.h"

@interface TITypologyRecordSetOriginalInput : TITypologyRecord

@property (copy, nonatomic) NSString *originalInput; // ivar: _originalInput


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif