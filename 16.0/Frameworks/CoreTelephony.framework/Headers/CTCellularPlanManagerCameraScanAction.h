// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCELLULARPLANMANAGERCAMERASCANACTION_H
#define CTCELLULARPLANMANAGERCAMERASCANACTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *OID; // ivar: _OID
@property (retain, nonatomic) NSString *matchingId; // ivar: _matchingId
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *smdpAddress; // ivar: _smdpAddress
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif