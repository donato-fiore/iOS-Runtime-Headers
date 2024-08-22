// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILEWARNING_H
#define MCPROFILEWARNING_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MCProfileWarning : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isLongForm; // ivar: _isLongForm
@property (retain, nonatomic) NSString *localizedBody; // ivar: _localizedBody
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
+(id)warningWithLocalizedTitle:(id)arg0 localizedBody:(id)arg1 isLongForm:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProfileWarning:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedTitle:(id)arg0 localizedBody:(id)arg1 isLongForm:(BOOL)arg2 ;
-(id)serializedDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif