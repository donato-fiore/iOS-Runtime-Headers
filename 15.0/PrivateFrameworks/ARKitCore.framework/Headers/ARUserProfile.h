// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUSERPROFILE_H
#define ARUSERPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ARUserProfile : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)defaultProfile;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif