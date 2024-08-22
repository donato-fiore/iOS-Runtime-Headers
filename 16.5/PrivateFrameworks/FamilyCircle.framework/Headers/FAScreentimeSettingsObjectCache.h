// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASCREENTIMESETTINGSOBJECTCACHE_H
#define FASCREENTIMESETTINGSOBJECTCACHE_H

@class NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAScreentimeSettingsObjectCache : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) id *introductionModel; // ivar: _introductionModel
@property (retain, nonatomic) NSNumber *memberDSID; // ivar: _memberDSID


+(BOOL)supportsSecureCoding;
+(id)objectWithData:(id)arg0 ;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntroductionModel:(id)arg0 date:(id)arg1 dsid:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif