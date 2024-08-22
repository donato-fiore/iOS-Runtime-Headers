// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSACTIVITYREPORTITEM_H
#define CLSACTIVITYREPORTITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "CLSReportItem.h"

@interface CLSActivityReportItem : CLSReportItem <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif