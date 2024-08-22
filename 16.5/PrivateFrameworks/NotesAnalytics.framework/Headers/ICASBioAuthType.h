// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASBIOAUTHTYPE_H
#define ICASBIOAUTHTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASBioAuthType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger bioAuthType; // ivar: _bioAuthType


-(id)initWithBioAuthType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif