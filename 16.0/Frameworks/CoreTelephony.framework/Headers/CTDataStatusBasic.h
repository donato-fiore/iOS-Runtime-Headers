// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDATASTATUSBASIC_H
#define CTDATASTATUSBASIC_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataStatusBasic : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL attached; // ivar: _attached
@property (nonatomic) BOOL cellularDataPossible; // ivar: _cellularDataPossible
@property (nonatomic) BOOL hasIndicator; // ivar: _hasIndicator
@property (nonatomic) BOOL inHomeCountry; // ivar: _inHomeCountry
@property (nonatomic) BOOL newRadioCoverage; // ivar: _newRadioCoverage
@property (nonatomic) BOOL roamAllowed; // ivar: _roamAllowed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif