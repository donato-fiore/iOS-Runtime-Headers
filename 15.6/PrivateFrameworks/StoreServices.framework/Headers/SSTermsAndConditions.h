// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSTERMSANDCONDITIONS_H
#define SSTERMSANDCONDITIONS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSTermsAndConditions : NSObject <NSCopying>



@property (nonatomic) NSString *currentText; // ivar: _text
@property (nonatomic) NSInteger currentVersionIdentifier; // ivar: _versionID
@property (readonly, nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (nonatomic, getter=isUserAccepted) BOOL userAccepted; // ivar: _userAccepted


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseData:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif