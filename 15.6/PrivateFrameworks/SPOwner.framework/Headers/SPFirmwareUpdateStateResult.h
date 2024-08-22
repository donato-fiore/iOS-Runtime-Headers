// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPFIRMWAREUPDATESTATERESULT_H
#define SPFIRMWAREUPDATESTATERESULT_H

@class NSString, NSError, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPFirmwareUpdateStateResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *currentSystemVersion; // ivar: _currentSystemVersion
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSDate *stateDate; // ivar: _stateDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionary;
-(id)firmwareUpdateState;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif