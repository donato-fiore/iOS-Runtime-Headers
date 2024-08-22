// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISPLAYPROFILE_H
#define PKDISPLAYPROFILE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(Class)classForDisplayProfileType:(NSInteger)arg0 ;
+(id)displayProfileOfType:(NSInteger)arg0 withDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif